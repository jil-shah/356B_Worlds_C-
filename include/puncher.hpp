#ifndef _LAUNCHER_H_
#define _LAUNCHER_H_

void puncherReset();
void launcher(int vel);
void shootAsync();
void shoot();
void loadBall();

void launcherTask(void* parameter);

void puncherOp(void* parameter);

#endif
