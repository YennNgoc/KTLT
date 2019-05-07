#include "pch.h"

tm GetTime(char * input)
{
	struct tm time;
	sscanf(input, "%2d/%2d/%4d", &time.tm_mday, &time.tm_mon, &time.tm_year);
	return time;
}

char* TimetoStr(tm time)
{
	char a[20];
	int ret = mktime(&time);
	if (ret ==-1)
	{
		printf("Thoi gian bi loi!");
	}
	strftime(a, 20, "%d/%m/%Y", &time);
	return a;
}


