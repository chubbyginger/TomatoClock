#ifndef __RTC_H
#define __RTC_H
#include "main.h"
#include <stdio.h>

void getTime(RTC_HandleTypeDef rtc, char* p_timestr);
void getDate(RTC_HandleTypeDef rtc, char* p_datestr);
void getDateTime(RTC_HandleTypeDef rtc, char* p_datetimestr);
void getDay(RTC_HandleTypeDef rtc, char* p_daystr);

#endif
