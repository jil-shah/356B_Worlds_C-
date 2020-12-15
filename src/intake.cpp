#include "main.h"

static int intakeTarget = 0;

//motors
Motor intake1(INTAKE, MOTOR_GEARSET_6, false, MOTOR_ENCODER_DEGREES);


/**************************************************/
//basic control
void intake(int vel){
  intake1.move_velocity(vel);
}

void _intake(int distance, int speed){
  intake1.move_relative(distance, speed);
}

void intakeReset(){
  intake1.tare_position();
}

/**************************************************/
//operator control
void intakeOp(void* parameter){
  static int vel = 0;
  while(true){
  if(master.get_digital(DIGITAL_R1))
    intake(600);
  else if(master.get_digital(DIGITAL_R2))
    intake(-600);
  else
    intake(0);
  }
}
