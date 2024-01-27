/*
	문제 2
	다음 내용에 맞는 프로그램을 작성하세요.
	조건
	정수형 변수 3개 선언 및 초기화 : int num1, num2, triple
	실수형 변수 1개 선언 및 초기화 : float division
	키보드로 정수값 2개 입력 : sapce bar 구분자 사용
	첫 번째 정수에 대한 세제곱 연산식을 작성
	첫 번째 정수를 두 번째 정수로 나누는 연산식 작성
	세제곱과 나눗셈 연산 결과값을 출력 자릿수 : 전체 8자리(빈자리는 0으로 채움)
	출력 결과
	정수값 2개 입력 : 8 3
	세제곱 연산 결과 : 8 * 8 * 8 = 00000512
	나눗셈 연산 결과 : 8 / 3 = 0002.667
*/

#include <stdio.h>

int main(void) {

	int num1=0, num2=0, triple=0;
	float division=0.0;

	printf("정수값 2개 입력 : ");
	scanf_s("%d %d", &num1, &num2);

	triple = num1 * num1 * num1;
	printf("세제곱 연산 결과 : %d * %d * %d = %08d\n", num1, num1, num1, triple);

	division = (float)num1 / num2;
	printf("나눗셈 연산 결과 : %d / %d = %08.3f\n", num1, num2, division);

	return 0;
}