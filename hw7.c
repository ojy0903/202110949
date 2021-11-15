#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double Deviation(int* arr)
{
	int avg = 0, i, x = 0;
	double total = 0, final = 0;;
	for (i = 0; i < 5; i++)
		avg += arr[i];
	avg = avg / 5;
	for (i = 0; i < 5; i++)
	{
		x = arr[i] - avg;
		total += pow(x, 2);
	}
	final = sqrt((total / 5));
	return final;
}

int main(void)
{
	int arr[5];
	printf("Enter 5 real numbers: ");
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	printf("Standard Deviation = %f", Deviation(arr));
	return 0;
}
