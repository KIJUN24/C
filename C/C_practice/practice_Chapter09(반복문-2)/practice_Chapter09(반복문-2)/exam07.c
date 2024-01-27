/*
	기타 분기문에 대한 실습-3
	return문에 대한 실습
*/

#include<stdio.h>

int add() {
	int x = 10, y = 20, hap = 0;
	hap = x + y;
	return hap;
}

int main(void) {

	int result = 0;
	printf("add() 함수의 덧셉 연산\n");
	result = add();

	printf("x가 10이고 y가 20일때 결과는");
	printf("%d", result);

	return 0;
}