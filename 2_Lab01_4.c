#include <stdio.h>

int daysofMonth[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
char* dayofWeek[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

int main() {
	int month, day;
	scanf("%d %d", &month, &day);
	for (int i = 1; i < month; ++i) {
		day += daysofMonth[i];
	}
	printf("%s\n", dayofWeek[day % 7]);
	return 0;
}