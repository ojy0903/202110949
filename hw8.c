#include <stdio.h>

int convCase(int ch)
{
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return ch;
}
int main(void)
{
	int ch;
	while (1)
	{
		ch = getchar();
		if (ch == EOF)
			break;
		ch=convCase(ch);
		putchar(ch);
	}
	return 0;
}