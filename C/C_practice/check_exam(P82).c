/*
실행결과 1
문자 입력 : A (enter)
A문자의 아스키 코드 값은 65입니다.

실행결과 2
문자 입력 : t (enter)
t문자의 아스키 코드 값은 116입니다.
*/

#include <stdio.h>

int main(void)
{
	char ch;

	printf("문자 입력 : ");
	scanf("%c", &ch);
	printf("%c문자의 아스키 코드 값은 %d입니다.\n", ch, ch);

	return 0;
}