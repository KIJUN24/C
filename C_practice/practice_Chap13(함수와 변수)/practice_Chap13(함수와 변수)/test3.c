/*
	변수의 연결 실습-2
	함수의 호출 예제 실습
*/

#include<stdio.h>

extern void global_function1();
extern void global_function2();

int main(void)
{
	printf("문> extern 키워드로 외부 함수 2개 모두 호출 \n");
	global_function1();
	global_function2();

	return 0;
}