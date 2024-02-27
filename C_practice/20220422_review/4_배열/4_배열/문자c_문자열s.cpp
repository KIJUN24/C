// 문자 : 문자 하나 '' %c
// 문자열 : 하나 이상의 문자열 "" %s

#include <stdio.h>

int main(void)
{
	char c = 'A';
	printf("%c\n", c);

	// 문자열 끝에는 끝을 의미하는 NULL문자 '\0'이 포함되어야 함.
	char str[7] = "coding";
	printf("%s\n", str);
	printf("%d\n", sizeof(str));


	char kor[] = "나노코딩";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));	// 9 : 각 2byte 차지하고 마지막 NULL => 9
	// 영어 1글자 : 1 byte
	// 한글 1글자 : 2 byte
	// char 크키 ; 1byte


	return 0;
}