#include <stdio.h>

int main(void)
{
	int i = 1;
	do
	{
		printf("Hello %d\n", i++);
	} while (i <= 10);
		return 0;
}