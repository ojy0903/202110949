#include <stdio.h>

int main(void)
{
	float kilo;
	float mile;
	printf("Please enter kilometers:");
	scanf("%f", &kilo);
	mile = (float)kilo / 1.609;
	printf("%.1f km is equal to %.1f miles.", kilo, mile);
	return 0;
}