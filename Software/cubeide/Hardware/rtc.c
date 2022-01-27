#include "rtc.h"

void getTime(RTC_HandleTypeDef rtc, char* p_timestr)
{
	RTC_TimeTypeDef time;
	HAL_RTC_GetTime(&rtc, &time, RTC_FORMAT_BIN);
	sprintf(p_timestr, "%02u:%02u", time.Hours, time.Minutes);
}
