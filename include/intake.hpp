#ifndef _INTAKE_H_
#define _INTAKE_H_

void intake(int vel);
void _intake(int distance, int speed);
void intakeReset();

bool hasBall();
bool isLoaded();

void intakeBallAsync();
void loadBallAsync();
void loadAndClearAsync();

void intakeTask(void* parameter);

void intakeOp(void* parameter);

#endif
