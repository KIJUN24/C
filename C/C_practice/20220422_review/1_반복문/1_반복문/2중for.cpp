#include <stdio.h>

int main(void)
{
	int count = 1;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
			
		}
		printf("\n");
	}
	return 0;
}