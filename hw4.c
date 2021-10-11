#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Divtwo(int num,int count)
{
	int result = 0;
	if (num < 2)
		return result + (num * count);
	else
		result += ((num % 2) * count);
	return result + Divtwo(num / 2, 10*count);
}

int main(void)
{
	int num1, final;
	printf("Please enter a number:");
	scanf("%d", &num1);
	final = Divtwo(num1,1);
	printf("%d", final);
	return 0;
}