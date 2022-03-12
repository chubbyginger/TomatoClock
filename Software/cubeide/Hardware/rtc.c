#include "rtc.h"

void getTime(RTC_HandleTypeDef rtc, char* p_timestr)
{
	RTC_TimeTypeDef time;
	HAL_RTC_GetTime(&rtc, &time, RTC_FORMAT_BIN);
	sprintf(p_timestr, "%02u:%02u", time.Hours, time.Minutes);
}

void getDate(RTC_HandleTypeDef rtc, char* p_datestr)
{
	RTC_DateTypeDef date;
	HAL_RTC_GetDate(&rtc, &date, RTC_FORMAT_BIN);
	sprintf(p_datestr, "%02u/%02u/%02u", date.Year, date.Month, date.Date);
}

void getDateTime(RTC_HandleTypeDef rtc, char* p_datetimestr)
{
	RTC_TimeTypeDef time;
	RTC_DateTypeDef date;

	HAL_RTC_GetTime(&rtc, &time, RTC_FORMAT_BIN);
	HAL_RTC_GetDate(&rtc, &date, RTC_FORMAT_BIN);

	sprintf(p_datetimestr, "%02u/%02u %02u:%02u", date.Month, date.Date,
			time.Hours, time.Minutes);
}

void getDay(RTC_HandleTypeDef rtc, char* p_daystr)
{
	RTC_DateTypeDef date;
	HAL_RTC_GetDate(&rtc, &date, RTC_FORMAT_BIN);
	char *days_chinese[8] = {"周一", "周二", "周三", "周四", "周五", "周六", "周日"};
	*p_daystr = days_chinese[date.WeekDay];
}
