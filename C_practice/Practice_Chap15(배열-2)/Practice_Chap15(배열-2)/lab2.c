/*
	문제2
	사용자로부터 2개의 문자열을 입력받아서 첫 번째 문자열이 "방가방가"이고,
	두 번째 문자열이 "안녕안녕"이라면 문자열을 서로 교환해서
	첫 번째 문자열은 "안녕안녕"이 되고, 두 번째 문자열이 "방가방가"가 되도록 출력하는 프로그램을 작성하시오.
	배열의 크기는 매크로 상수 LENGTH를 15로 설정하여 이용하자.

	실행결과
	두 개의 문자열을 교환하는 프로그램
	첫 번째 문자열 입력 : 안녕
	두 번째 문자열 입력 : 방가

	==================================
	두 개의 문자열을 교환하기 전의 값
	첫 번째 문자열 값 : 안녕
	두 번째 문자열 값 : 방가
	==================================
	두 개의 문자열을 교환 후 의 값
	첫 번째 문자열 값 : 방가
	두 번째 문자열 값 : 안녕

*/

#include<stdio.h>
#include<string.h>		// strcpy() 함수를 사용하기 위해서 include함.
#define _CRT_SECURE_NO_WARNINGS		// 웬만한 경고를 무시해버리는 매크로 상수
									// (C4996 에러 발생 시 좌측 매크로 상수를 선언하자)
#define LENGTH 15

int main(void)
{
	char first_char[LENGTH] = "", second_char[LENGTH] = "", temp_char[LENGTH] = "";
	int i;

	printf("두 개의 문자열을 교환하는 프로그램\n");
	printf("첫 번째 문자열 입력 : ");
	scanf_s(" %s", first_char, sizeof(first_char));
	printf("두 번째 문자열 입력 : ");
	scanf_s(" %s", second_char, sizeof(second_char));

	printf("\n========================================\n");
	printf("두 개의 문자열을 교환하기 전의 값\n");
	printf("첫 번째 문자열 값 : %s\n", first_char);
	printf("두 번째 문자열 값 : %s\n", second_char);

	// 문자열을 서로 교환하는 코드
	//for (i = 0; i < LENGTH; i++)
	//{
	//	temp_char[i] = first_char[i];		// 첫 번째 문자열을 빈 문자열에 옮기는 코드
	//	first_char[i] = second_char[i];		// 두 번째 문자열을 빈 첫 번째 문자열에 옮기는 코드
	//	second_char[i] = temp_char[i];		// 첫 번째 문자열을 넣어놨던 것을 두 번째 빈 문자열에 옮기는 코드
	//}


	// strcpy(문자열1, 문자열2) 함수를 이용해서 교환하는 코드
	strcpy(temp_char, first_char);		// first_char 문자열을 temp_char문자열로 복사하는 코드
	strcpy(first_char, second_char);	// second_char 문자열을 first_char문자열로 복사하는 코드
	strcpy(second_char, temp_char);		// temp_char 문자열을 second_char문자열로 복사하는 코드

	printf("\n========================================\n");
	printf("두 개의 문자열을 교환 후 의 값\n");
	printf("첫 번째 문자열 값 : %s\n", first_char);
	printf("두 번째 문자열 값 : %s\n", second_char);


	return 0;
}