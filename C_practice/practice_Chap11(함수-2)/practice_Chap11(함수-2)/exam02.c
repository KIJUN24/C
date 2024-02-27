// 함수 원형 종류에 대한 실습2 - 매개변수와 반환값이 모두 없는 함수

#include<stdio.h>

void ne();
void dDash();
void dash();

int main(void) {

	printf("매개변수와 반환값이 모두 없는 함수형\n");

	dash();
	printf("사용자 정의 한수 ne()를 호출합니다.\n");
	dash();

	ne();
	dDash();
	printf("프로그램을 종료합니다.\n");
	dDash();

	return 0;
}

void ne() {
	printf("\n[사용자 정의 함수 ne() 영역]\n\n");
	return;
}
void dDash() {
	printf("========================\n");
	return;
}
void dash() {
	printf("------------------------\n");
	return;
}