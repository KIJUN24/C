/*
	순환(재귀)함수(recursive function, recursive call) 실습-2
	사용자로부터 하나의 정수를 입력 받아서 재귀함수를 활용하여 누적합계를 구하는 실습예제
*/

#include<stdio.h>

int sum(int cnt);

int main(void)
{
	int input = 0, result = 0;

re_input:	
	input = 0;
	printf("어디까지 누적합계를 구할까요? ");
	scanf_s("%d", &input);
	getchar();

	if (input < 0)	// 음수가 들어왔을 때 에러를 처리하는 부분
	{
		printf("양수만 입력할 수 있습니다.\n");
		printf("프로그램을 다시 실행해주세요.\n");
		goto re_input;
	}
	else if (input > 32767)	// signed int : -32,768 ~ 32,767 이므로 유호범위를 벗어났을 때 에러 처리
	{
		printf("int 자료형의 유효범위를 벗어났습니다.\n");
		goto re_input;
	}
	else if (input > 0 && input < 32767)	// 정상적인 값이 들어왔을 때.
	{
		result = sum(input);
		printf("1부터 %d까지의 합 : %d\n", input, result);
	}
	else
	{
		printf("int형 타입인 32767까지 입력가능합니다.\n");
		goto re_input;
	}

	return 0;
}

// 사용자 정의 함수
int sum(int cnt)
{

	if (cnt == 1)	// 무한루프 탈출 조건
	{
		return 1;
	}
	else
	{
		return	cnt + sum(cnt - 1);		// 함수 호출 후 return
	}
}