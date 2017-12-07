/********************************************************************************
* FILE NAME: turret.h <FRC VERSION>
*
* DESCRIPTION: 
*  This file ...
*
********************************************************************************/
#ifndef turret_h_
#define turret_h_

void MoveTurretAuto(int TurretError);
void MoveTurretManual(void);
char get_pan_error(void);
void TurretSweep(void);


enum led_act {ON, OFF, FASTBLINK, SLOWBLINK};
void led_activity (enum led_act action);


char get_tilt_angle(void);

extern char gToggleSweep;

#endif //turret_h_	NO CODE BELOW THIS LINE