// 유틸리티 함수에 대한 실습-3(Sleep()함수)
// Sleep() : CPU의 실행을 일시정지(timed waiting)상태로 만든다.
// 단, 매개변수로 들어가는 단위가 1/1000초이다.

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>		// Sleep()를 사용하기 위함

int main(void) {

	system("title Sleep()함수에 대한 실습");

	printf("현재 프로그램이 존재하는 디렉토리 정보 출력 \n");
	system("dir");
	
	printf("\n이 프로그램은 10초 후에 종료됩니다.\n");

	Sleep(10000);	// 10초간 일시정지

	system("cls");

	return 0;
}