#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[5], i = 0, j=0, k=0;
	printf("5개의 정수를 입력하세요: ");
	for (i; i < 5; i++)
		scanf("%d", &arr[i]);
	printf("홀수 출력:");
	for (j; j < 5; j++)
	{
		if (arr[j] % 2 != 0)
			printf("%d ", arr[j]);
	}
	printf("\n짝수 출력:");
	for (k; k < 5; k++)
	{
		if (arr[k] % 2 == 0)
			printf("%d ", arr[k]);
	}
	return 0;
}