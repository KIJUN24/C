/*
	함수와 변수(실습-6)
	동적변수(automatic variable)와 정적변수(static variable)에 대한 실습
	- 동적변수(지역변수, auto변수, 자동변수)
	: 지역변수를 동적변수라고 하는 이유는 지역변수를 선언한 위치에서
	  함수가 종료되면 자동으로 소멸하기 때문이다.
	  동적변수, auto변수, 자동변수라고 한다.
	  동적변수를 선언하려면 auto키워드를 붙이면 된다.
	  지금까지 지역변수를 사용하면서 단 한 차례도 auto를 붙이지 않았다.
	  그래도 자동으로 소멸이 이루어졌다.
	  그 이유는 컴파일러가 지역변수로 선언하면 기본적으로 동적변수로 적용시켜주기 때문이다.
*/

#include<stdio.h>

void func(int hap, int cnt);

int main(void)
{
	auto int hap = 0;	// 동적변수 선언 및 초기화
	int cnt = 10;		// 지역변수 선언 및 초기화

	printf("[main()함수 영역]\n");
	func(hap, cnt);
	printf("[main()함수 영역]\n");
	printf("auto int hap의 값 : %d\n", hap);
	printf("int cnt의 값 : %d\n\n", cnt);

	return 0;
}

void func(int hap, int cnt)	
// 매개변수로 넘어온 두 개의 지역변수는 함수 종료와 함께 소멸된다는 것을 알 수 있다.
{
	printf("[func()함수 영역]\n");
	printf("auto int hap의 값 : %d\n", hap);
	printf("int cnt의 값 : %d\n", cnt);
	hap++;
	cnt++;
	return;
}