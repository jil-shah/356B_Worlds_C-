#include "main.h"

//_________________________doneeee______________________________________________________________________-----_______________________

void front_red(){   //works do not change align with diamond at the front
  //front red go intake ball

  /*intake (600);
  //drive forward intake ball
  drive (1.43 TL);
  delay(20);
  intake (0);
  //drive back to wall
  drive(-1.45 TL);
  drive(0.127 TL);
*/

  drive (1.39 TL);
  intake(600);

  //turn the bot
  drive(-1.42 TL);
  intake(0);
  drive(0.127 TL);
  intake(-100);

  //turn the bot
  turn(69);
  intake(-65);
  drive(0);

  delay(200);
  intake(0);


  lift_encod(120, 127);
  frontDoubleshot();

  drive(1 TL);
  turn(21);
    //DRIVE STRAIGHT

  intake(300);
  drive (.95 TL);

  intake(0);

/* for the front coming back for the middle flag set red

*/

}

//______________________________doneeee_________________________________________________________________-----_______________________

void front_blue(){    // worksssss
//turn A LITTLE MORE FOR FLAGS
  drive (1.35 TL);
  intake(600);

  //turn the bot
  drive(-1.40 TL);
  intake(0);
  drive(0.125 TL);
  intake(-100);

  turn(-73);
  lift_encod(145, 127);

  intake(0);

  frontblueDoubleshot();

  drive(1 TL);
  turn(-1.15);
  //DRIVE STRAIGHT

  intake(400);
  drive (.85 TL);

  intake(0);

/*__________________________________________________________________________________
  lift_encod(10, 127);
  drive(-1 TL);

  turn (70);
  drive(.5 TL);

  lift_encod(30, 127);
  drive(-.85 TL);


  turn(30);
*/
  //frontblueDoubleshot();
}



//_______________________________________________________________________________________________-----_______________________
//_______________________________________________________________________________________________-----_______________________
//_______________________________________________________________________________________________-----_______________________
//_______________________________________________________________________________________________-----_______________________
//_______________________________________________________________________________________________-----_______________________


//-----------------------------------------------------------done----------------------------------
void back_red_flags_p(){

  drive (1.3639 TL);
  intake(600);
  delay(100);

  //drive back

  drive(-.23 TL);
  intake(0);
  //turn 90

  turn(60);

  //drive to flags
  drive(.6 TL);

  //DRIVE BACKK
  drive(-.2 TL);

  //turn a little to flags
  turn (-26.5);

  intake(-100);
  drive(0);

  delay(200);
  intake(0);

  lift_encod(145, 127);

  red_midshot();
  drive(-.20 TL);

  turn(-147);
  delay(10);
  setBrakeMode(2);
  delay(10);

  drive(-1.48 TL);
  setBrakeMode(2);
  delay(100);


}
//-------------------------------------------done_---------------------------------

void back_blue_flags_p(){

  //drive forward intake ball
  drive (1.364 TL);
  intake(600);
  setBrakeMode(2);
  delay(25);

  //drive back

  drive(-.198 TL);
  intake(0);
  //turn 90

  turn(-68);

  //drive to flags
  drive(.6 TL);

  drive(.15 TL);

  //DRIVE BACKK
  drive(-.215 TL);

  //turn a little to flags
  turn (19.88);
  intake(-100);
  drive(0);

  delay(200);
  intake(0);

  lift_encod(145, 127);
  delay(2000);
  middleDoubleshot();
  drive(-.25 TL);
  turn(130);
  delay(10);
  setBrakeMode(2);
  delay(10);
  drive(-1.525 TL);
  setBrakeMode(2);


}


//_______________________________________________________________________________________________-----_______________________
//_______________________________________________________________________________________________-----_______________________
//_______________________________________________________________________________________________-----_______________________
//_______________________________________________________________________________________________-----_______________________
//_______________________________________________________________________________________________-----_______________________


void back_blue_cap(){

    drive(-1 TL);

    turn(-75);

    drive(-.4 TL);

    drive(.75 TL);

    intake(600);


}


void back_red_cap(){

  //BACK CAP
    drive (-.13 TL);
    turn(-26 );

    drive (-1.42 TL);

    lift_encod(150, 40);

    turn (14);

    drive (.7 TL);
  /*
    turn (25);

    drive(.63 TL);

    lift_encod(820, 50);


  */
}

//_______________________________________________________________________________________________-----_______________________
//_______________________________________________________________________________________________-----_______________________
//_______________________________________________________________________________________________-----_______________________
//_______________________________________________________________________________________________-----_______________________
void front_full_red(){   //works do not change align with diamond at the front
// drive forward

  drive (1.36 TL);
  intake(377);

  //turn the bot
  drive(-1.423 TL);
  intake(0);
  drive(0.127 TL);
//value to bring the ball down
  intake(-105);

//turn the robot
  turn(71);
  lift_encod(120, 127);
//stops the ball from going down
  intake(0);

//front double shot (probably will have to change the values in macros)
  frontDoubleshot();
  intake (100);
//drive forward to hit the bottom flag
  drive(0.97 TL);

//turns the robot so it doesnt hit the flagset
  turn(20.);

//DRIVE STRAIGHT
//intake a ball if near the wall
  intake(600);
  drive (.85 TL);



//hit the wall more just in case
  //turn (15);
  drive(.325 TL);
  intake(0);
//__________________________________________________________________________________

//lift the lift up just in case
  lift_encod(10, 127);

//drive backward
  drive(-.85 TL);

//turn the robot to prevent it from hitting the wall
  turn (19);

//drive back more
  drive(-.45 TL);

//turn to the flagset and hit the brakes
  turn(-68.5);
  setBrakeMode(2);

//shoot once
  one_shot();
// run the intake and drive to the cap
  intake(-600);
  drive(.65 TL);

/* for the front coming back for the middle flag set red

*/

}

//__________________________________________________________
void front_full_blue (){
  drive (1.371 TL);
  intake(600);
  //delay(10);
  //intake(300);
  //turn the bot
  drive(-1.42 TL);
  intake(0);
  drive(0.125 TL);
  intake(-100);

  turn(-74);
  lift_encod(145, 127);

  intake(0);

  frontblueDoubleshot();

  drive(1 TL);
  turn(-20.8);
    //DRIVE STRAIGHT

  intake(600);
  drive (.85 TL);

  intake(0);

  //turn (15);
  drive(.325 TL);


//__________________________________________________________________________________
  lift_encod(10, 127);
  drive(-.85 TL);

  turn (-18);
  intake(100);
  drive(-.4 TL);
  turn(67.5);
  setBrakeMode(2);

  one_shot();
  intake(-600);

  drive(.65 TL);


/*
  drive(.5 TL);

  intake(600);
  setBrakeMode(2);
  delay(10);

  drive(-.05 TL);
  drive (-.3 TL);


*/
  //frontblueDoubleshot();
}

//_______________________________________________________________________________________________-----_______________________
//_______________________________________________________________________________________________-----_______________________
//_______________________________________________________________________________________________-----_______________________
//_______________________________________________________________________________________________-----_______________________
//_______________________________________________________________________________________________-----_______________________
//_______________________________________________________________________________________________-----_______________________
//_______________________________________________________________________________________________-----_______________________
//_______________________________________________________________________________________________-----_______________________

void back_red_defence(){

  drive (1.364 TL);
  intake(550);
  delay(35);

  //drive back

  drive(-.2 TL);
  intake(0);
  //turn 90

  turn(60);

  //drive to flags
  drive(.6 TL);

  //DRIVE BACKK
  drive(-.274 TL);

  //turn a little to flags
  turn (-46.1);

  intake(-110);
  drive(0);

  delay(200);
  intake(0);

  lift_encod(145, 127);

  defence_mech();
  drive(-.20 TL);

  turn(-125.5);

  delay(10);
  setBrakeMode(2);
  delay(10);

  drive(-1.4625 TL);
  setBrakeMode(2);
  delay(100);

}

void school(){
  //1
  drive(.75 TL);
  turn(74);
  //2
  drive(.65 TL);
  turn(-38);
  //3
  drive(1.25 TL);
  turn(38);
  //4
  drive(1.5 TL);
  turn(70);
  //5
  drive(.7 TL);
  turn(-71);
  //6
  drive(.7 TL);
  turn(70);
  //7
  drive(.78 TL);
  turn(71);
  //8
  drive(1.2 TL);
  turn(-38);
  //9
  drive(.6 TL);


}

//_______________________________________________________________________________________________-----_______________________
//_______________________________________________________________________________________________-----_______________________
//_______________________________________________________________________________________________-----_______________________
//_______________________________________________________________________________________________-----_______________________
//_______________________________________________________________________________________________-----_______________________
//_______________________________________________________________________________________________-----_______________________
//_______________________________________________________________________________________________-----_______________________
//_______________________________________________________________________________________________-----_______________________


void autonomous() {
  _driveReset(); // reset the drive encoders
  intakeReset(); // reset the intake encoders
  Task drive_task(driveTask);
  Task turn_task(turnTask);
  school();
  // Start Writing code here

  //front_red(); //DIDNT HIT MIDDLE DIDNT HIT WALL
  //front_blue();

  //back_red_flags_p();
  //back_blue_flags_p();

  //front_full_red();
  //front_full_blue();

  //back_red_defence();

  //frontblueDoubleshot();
  //_adjust(0,127);
  // End code here
  drive_task.remove();
  turn_task.remove();
  _driveReset(); // make sure no motors are moving
  _adjust(0, 200); // reset adjuster
}
