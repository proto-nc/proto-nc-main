#ifndef _LASER_HPP_
#define _LASER_HPP_

#include "conf.hpp"


extern bool laser_is_on;
extern int laser_tone; //[0, 100]

void laser_init() AUTORUN;

void laser_on(void);
void laser_off(void);
void laser_set(bool state);

void laser_set_tone(int t);


//CONV(N_drive_cmd_max, Tstep, Tms)

#endif//_LASER_HPP_
