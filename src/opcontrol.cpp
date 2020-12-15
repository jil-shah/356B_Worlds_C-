#include "main.h"

Controller master(E_CONTROLLER_MASTER);
Controller partner(E_CONTROLLER_PARTNER);

void opcontrol(){
  partner.set_text(0,0, "Hey, Susan");
  adjustReset();
  puncherReset();
  mirror = false;
  Task puncher_task(puncherOp);
  Task adjuster_task(adjusterOp);
  Task driver_task(driveOp);
  Task intake_op(intakeOp);
  Task lift_task(liftOp);

}
