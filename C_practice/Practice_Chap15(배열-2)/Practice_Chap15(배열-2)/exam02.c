/*
	배열과 문자열에 대한 실습-2
	사용자로부터 문자열을 입력받아서 길이를 구하는 예제 실습
*/

#include<stdio.h>
#define LENGTH 20


int main(void)
{
	char str[LENGTH] = { NULL };	// char배열 선언 후 초기화
	int cnt = 0, length = 0;		// 루프변수와 배열의 길이를 저장할 변수 초기화

	printf("문자열을 20바이트 미만으로 입력하세요(영문:1바이트, 한글:2바이트) : ");
	scanf_s("%s", str, sizeof(str));
	// str은 배열명이다. 고로 배열명은 주소이므로 &를 붙일 필요가 전혀 없다.

	// 한글은 2바이트, 영문은 1바이트(비주얼 스튜디오는 CP949문자셋을 기본으로 하기 떄문이다.)
	for (cnt = 0; str[cnt] != '\0'; cnt++)	// NULL값을 확인하면 루프를 탈출한다.
	{
		length++;
	}
	printf("\n");
	printf("입력한 문자열의 길이 : %dbyte \n", length);


	return 0;
}