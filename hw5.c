#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[5], i = 0, j=0, k=0;
	printf("5���� ������ �Է��ϼ���: ");
	for (i; i < 5; i++)
		scanf("%d", &arr[i]);
	printf("Ȧ�� ���:");
	for (j; j < 5; j++)
	{
		if (arr[j] % 2 != 0)
			printf("%d ", arr[j]);
	}
	printf("\n¦�� ���:");
	for (k; k < 5; k++)
	{
		if (arr[k] % 2 == 0)
			printf("%d ", arr[k]);
	}
	return 0;
}