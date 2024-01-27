/*
	문제-1
	매개변수와 반환값이 없는 사용자 정의 함수를 1개 정의 및 구현
	for문으로 3회 사용자 정의 함수를 호출
	사용자 정의함수에서 정적(static)변수를 선언

	출력결과
	정적 지역 변수로 로그인 여부를 판별하는 프로그램
	for문으로 로그인 판별 함수 3회 호출
	1회 실행 : 로그인 성공
	2회 실행 : 현재 로그인 상태
	확인
	3회 실행 : 현재 로그인 상태
	확인
	총 3회를 수행 후 프로그램을 종료합니다.
*/

// 내 생각 static을 사용해 로그인이 되어있는 상태를 확인하는 게 이 문제의 핵심인 것 같다.

#include<stdio.h>

void login_check(void);

int main(void)
{
	int cnt = 0;
	for (cnt = 1; cnt <= 3; cnt++)
	{
		printf("%d회 실행 : ", cnt);
		login_check();
	}
	printf("총 %d회를 수행 후 프로그램을 종료합니다.\n", --cnt);

	return 0;
}

void login_check(void)
{
	static int log = 0;		// 정적변수 선언과 동시에 초기화

	if (log == 0)
	{
		printf("로그인 성공\n");
		log = 1;		// static변수는 데이터 영역에 할당되어 값을 프로그램 종료시까지 유지함.
	}
	else
	{
		printf("현재 로그인 상태\n");
		printf("확인\n");
	}

	return;
}