#include<stdio.h>

int main(void) {
	char ch = ' ';

	printf("알파벳 하나를 입력 : ");
	scanf_s("%c", &ch, sizeof(ch));

	if (ch >= 'A' && ch <= 'Z')
	{
		printf("입력한 알파벳 %c는 대문자이고\n", ch);
		printf("아스키 코드 값은 %d입니다.\n", ch);
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		printf("입력한 알파벳 %c는 소문자이고\n", ch);
		printf("아스키 코드 값은 %d입니다.\n", ch);
	}
	else
	{
		printf("영어를 입력해주세요.\n");
	}

	return 0;
}