#include "main.h"

void frontDoubleshot(){
  _adjust(120,127);
 shoot();
 intake(600);
 delay(105);
 _adjust(255,127);
 shoot();
 intake(0);

}

void frontblueDoubleshot(){
  _adjust(100,127);
 shoot();
 intake(570);
 delay(75);
 _adjust(240,127);
 shoot();
 intake(0);

}

void red_midshot(){
  _adjust(193,127);  //up and x are the values that will hit it
  shoot();
  intake(600);
  pros::delay(500);
  _adjust(330.5, 127);
  shoot();
  intake(0);
}

void backDoubleshot(){   //fixeddddd
   _adjust(190,127);
  shoot();
  intake(600);
  delay(40);
   _adjust(300,127);
  shoot();
  intake(0);
}

void middleDoubleshot(){
  _adjust(190,127);  //up and x are the values that will hit it
  shoot();
  intake(600);
  pros::delay(520);
  _adjust(330, 127);
  shoot();
  intake(0);
}

void one_shot(){
  intake(600);
  _adjust(190,127);
 shoot();
}

void defence_mech(){   //fixeddddd
   _adjust(130,127);
  shoot();
  intake(600);
  delay(250);
   _adjust(300,127);
  shoot();
  intake(0);
}

// (240, 127);
// (123, 127);
