#include <stdio.h>

int main(void) {

	int a;
	int b;

	printf("숫자를 입력해주세요. : ");
	scanf_s("%d %d", &a, &b);
	printf("%d, %d", a, b);

	return 0;
}