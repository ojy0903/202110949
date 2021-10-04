#include <stdio.h>
int main(void)
{
	int num;
	int cur;
	printf("Please enter a number:");
	scanf("%d", &num);
	for (cur = 2; cur < num; cur++)
	{
		if (num % cur == 0)
		{ 
			printf("It is not a prime number");
			break;
		}
		else if (cur == (num-1))
		{
			printf("It is a prime number");
			break;
		}
	}	
	return 0;
}


	
		