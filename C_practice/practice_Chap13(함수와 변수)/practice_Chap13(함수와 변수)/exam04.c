/*
	함수와 변수(실습-4)
	전역변수에 대한 실습
	- 전역변수는 공유변수의 개념과 동일하기 때문에 웬만하면 건드리지 않도록 한다.
	- 전역변수의 생명주기(life cycle, lifetime)에 대한 실습
*/

#include<stdio.h>

// 사용자 정의 함수 선언(매개변수가 없음)
int add();

// 전역변수 선언
int global_x;
int global_y;

int main(void)
{
	int sum = 0;

	printf("전역변수들의 초기값 : %d %d\n", global_x, global_y);

	global_x = 10;
	global_y = 20;
	printf("전역변수들의 저장된 값 : %d %d\n", global_x, global_y);

	printf("======================================\n");
	printf("문제> global_x = 10, global_y = 20일 때 덧셈 연산 결과\n");
	printf("[main()함수 영역]\n");
	printf("호출> 덧셈 연산을 위해 add()를 호출\n");

	sum = add();	// 사용자 정의 함수 호출, 매개변수 없음

	printf("[main()함수 영역]\n");
	printf("회신> add()함수로부터 덧셈 연산 결과 반환\n");
	printf("결과> 전역변수를 사용하여 덧셈한 결과 : ");
	printf("%d + %d = %d\n", global_x, global_y, sum);

	return 0;
}

// 사용자 정의 함수 구현
int add()	// 전역변수를 이용해 매개변수의 메모리를 줄일 수 있다.
{
	int hap = 0;
	hap = global_x + global_y;	// 전역변수를 이용하여 덧셈 처리

	printf("[add()함수 영역]\n");
	printf("수행> 전역변수 정수 2개 덧셈 연산 수행\n");

	return hap;	
	// 사용자 정의 함수가 종료되더라도 전역변수들은 아직 메모리에서 소멸되지 않는다.
	// 하지만 hap이라는 지역변수는 소멸된다.
}