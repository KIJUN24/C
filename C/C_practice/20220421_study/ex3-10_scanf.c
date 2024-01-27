#include<stdio.h>

int main(void)
{
	int age;
	double height;

	printf("나이와 키를 입력하세요 : ");
	scanf("%d%lf", &age, &height);  // scanf를 사용할 경우 &를 붙어야 한다.
	printf("나이는 %d, 키는 %.1lfcm입니다.\n", age, height);

	return 0;
}