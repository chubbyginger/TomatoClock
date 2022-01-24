#include "rtc.h"

char* getTime(RTC_HandleTypeDef rtc)
{
	RTC_TimeTypeDef time;
	HAL_RTC_GetTime(&rtc, &time, RTC_FORMAT_BIN);
	char timestr[6];
	snprintf(timestr, sizeof(timestr), "%02u:%02u", time.Hours, time.Minutes);
	return timestr;
}
