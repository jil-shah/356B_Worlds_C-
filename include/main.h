#ifndef _PROS_MAIN_H_
#define _PROS_MAIN_H_

#define PROS_USE_SIMPLE_NAMES

#define PROS_USE_LITERALS

#include "api.h"
#include "adjuster.hpp"
#include "drive.hpp"
#include "lift.hpp"
#include "puncher.hpp"
#include "intake.hpp"
#include "macros.hpp"
#include "skill.hpp"

//ports
#define LEFTFRONT 12
#define LEFTREAR 2
#define RIGHTFRONT 4
#define RIGHTREAR 3
#define LAUNCHER 6
#define ADJUSTER 5
#define LIFT 8
#define INTAKE 7

//definition of a tile in encoder ticks
#define TL *545

using namespace pros;
using namespace pros::literals;

extern Controller master;
extern Controller partner;
extern bool mirror;
extern int intake_speed;
#ifdef __cplusplus
extern "C" {
#endif
void autonomous(void);
void initialize(void);
void disabled(void);
void competition_initialize(void);
void opcontrol(void);
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
/**
 * You can add C++-only headers here
 */
//#include <iostream>
#endif

#endif  // _PROS_MAIN_H_
