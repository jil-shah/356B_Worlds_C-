#include "main.h"

// Angle Changer Motor
Motor Angle_Changer (ADJUSTER, MOTOR_GEARSET_18, true, MOTOR_ENCODER_DEGREES);
bool change = false;

/*************************Basic Functions***********************/
// Sets adjuster speed
void adjust(int vel){
  Angle_Changer.move(vel);
}

// Sets the angle of the puncher
void _adjust(int distance, int vel){
  while(distance != Angle_Changer.get_position()){
    Angle_Changer.move_absolute(distance, vel);
    if (Angle_Changer.get_position() >= (distance-5) && Angle_Changer.get_position() <= (distance+5)){
      break;
    }
  }
}

// Resets the angle changer position
void adjustReset(){
  Angle_Changer.tare_position();
}
/*************************Operator Control***********************/
void adjusterOp(void*parameter){
  Angle_Changer.set_brake_mode(MOTOR_BRAKE_BRAKE);
  while(true){

//manual
  // If partner click up button then it move adjuster positive direction
  if(partner.get_digital(DIGITAL_L1) == 1){
    adjust(127);
  }
  // If partner click down then it move adjuster negative direction
  else if(partner.get_digital(DIGITAL_L2)){
    adjust(-127);
  }

//automated


  //front mid flags
  else if (partner.get_digital(DIGITAL_Y)){
    //240,127 JIL HAD
    //230,127 AMAN CHANGE 1  NOT WORK
    //228,127 AMAN CHANGED 2 NOT WORK
    //232,127 AMAN CHANGED 3
   _adjust(265,127);
  }

  //full court from corner
  else if  (partner.get_digital(DIGITAL_X)){
    //100,127 JIL HAD
    //98,127 AMAN CHANGED WORKS
    _adjust(120,127);
  }

  else if (partner.get_digital(DIGITAL_UP)){
    _adjust(230,127);
  }
  else if (partner.get_digital(DIGITAL_RIGHT)){
    _adjust(345, 127);
  }
  //amans shots from back

  else if (master.get_digital(DIGITAL_UP)){
    //240,127
    //232,127 AMAN CHANGED WORKS
    _adjust(250,127);
  }
  else if(master.get_digital(DIGITAL_DOWN)){
    //100,127
    //98,127 AMAN CHANGED WORKS
    _adjust(120, 127);
  }
  else if (master.get_digital(DIGITAL_RIGHT)){
    _adjust(220, 127);
  }
  else if (master.get_digital(DIGITAL_LEFT)){
    _adjust(345, 127);
  }

  else{
    adjust(0);
  }
}
}
