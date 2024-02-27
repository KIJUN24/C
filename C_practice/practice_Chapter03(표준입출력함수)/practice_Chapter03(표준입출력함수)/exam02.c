#include <stdio.h>

int main(void) {

	printf("123 + 123\n");

	printf("%d\n", 4);
	printf("%f\n", 1.234);
	printf("%o\n", 10);
	printf("%x\n", 10);
	printf("%c\n", 'a');
	printf("%s\n", "adf");

	printf("%d %d", 10, 23);
	printf("%d + %d = %d", 10, 20, 10 + 20);

	return 0;
}