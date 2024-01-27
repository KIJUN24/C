/*
	함수와 변수(실습-7)
	동적변수(automatic variable)와 정적변수(static variable)에 대한 실습
	- 정적변수
	: 전역변수와 마찬가지로 프로그램의 실행과 동시에 메모리(데이터 영역)에 데이터 타입의 크기만큼
	  할당을 받고 초기화를 하지 않아도 자동으로 데이터 타입의 맞게 자동 초기화가 이루어진다.
	  생면주기가 프로그램의 실행과 종료에 의해서 같이 항당되고 소멸이 이루어진다.
	  정적변수가 동적변수와 차이점은 정적변수가 선언된 함수 또는 코드 블록 구간을 벗어나도
	  정적변수의 값은 유지가 된다.
	  정적변수를 선언하기 위해서는 변수명 앞에 static키워드를 붙여주면 된다.
*/

// 3. 정적변수를 활용하여 입출금 내역을 출력하는 예제
#include<stdio.h>

void credit(int cash);

int main(void)
{
	int cnt = 0, cash = 0;

	for (cnt = 1; cnt <= 3; cnt++)
	{
		printf("<%d회 실행>\n", cnt);
		printf("cash : ");
		scanf_s("%d", &cash);

		printf("입금\t\t출금\t\t잔액\n");
		credit(cash);
	}

	return 0;
}

void credit(int cash)
{
	static int balance = 0;	// 정적변수 선언과 초기화
	// 잔액은 유지되어야 하기 때문에 정적변수로 선언하였다.
	if (cash > 0)	// 입금
	{
		printf("%d\t\t\t\t", cash);
	}
	else            // 출금
	{
		printf(" \t\t%d\t\t", -cash);
	}
	
	// 잔액계산
	balance += cash;
	printf("%d\n", balance);

	return;
}