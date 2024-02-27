#include <stdio.h>

int main()
{
	char grade;
	char name[20];

	printf("학점 입력 : ");
	scanf("%c", &grade);
	printf("이름 입력 : ");
	scanf("%s", name);     // 문자열은 &를 붙이지 않는다.
	printf("%s의 학점은 %c입니다.\n", name, grade);

	return 0;
}