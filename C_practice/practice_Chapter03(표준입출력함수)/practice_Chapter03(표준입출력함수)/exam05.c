#include<stdio.h>
#include<stdlib.h>

int main(void) {

	system("title 문자열 데이터 자릿수 지정");

	printf("|%s|", "C program!");
	printf(" : 문자열 기본 자릿수 출력\n");

	printf("|%12s|", "C program!");
	printf(" : 전체 자릿수 12자리, 오른쪽 정렬\n");

	printf("|%-12s|", "C program!");
	printf(" : 전체 자릿수 12자리, 왼쪽 정렬\n\n");

	printf("----------------------------------------\n");

	// 배열을 이용하여 문자열 출력(공간을 할당하는 자료형)
	char str[15] = "C program!";
	printf("%s\n", str);
	printf("str의 주소 : %p\n", str);
	// 포인터를 이용하여 문자열 출력(포인터는 주소만 저장하는 데이터 형식)
	char *pstr = "C program!";
	printf("%s\n", pstr);
	printf("pstr의 주소 : %p\n", pstr);

	return 0;
}