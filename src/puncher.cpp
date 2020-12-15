#include "main.h"

pros::Motor Puncher (LAUNCHER, MOTOR_GEARSET_36, true, MOTOR_ENCODER_DEGREES);

const int rd = -180;
static const int final = 200;
static bool launcherBool = false;
static int launchSwitch = 0;

/*****************Basic*****************/
void launcher(int vel){
  Puncher.move(vel);
}

void puncherReset(){
  Puncher.tare_position();
}

/**********Auton Control*****/

void shoot(){
  launcherBool = true;
  launchSwitch = 0;
  while(launcherBool){
    if(launchSwitch == 0){
      launcher(127);
      if(Puncher.get_torque() > 1){
        launchSwitch = 1;
      }
    }
    else if(launchSwitch == 1){
      if(Puncher.get_torque() < 0.5){
        Puncher.tare_position();
        while(abs(Puncher.get_position()) <= final){
          launcher(600);
        }
        launcherBool = false;
      }
      else{
        launcher(600);
      }
    }
  }

  launcher(0);
}

/********Operator*********/
void puncherOp(void* parameter){
  while(true){
    if(partner.get_digital(DIGITAL_A) == 1){
      shoot();
   }
   else if (master.get_digital(DIGITAL_A)){
     shoot();
   }

   else{
     launcher(0);
   }
 }
  }
