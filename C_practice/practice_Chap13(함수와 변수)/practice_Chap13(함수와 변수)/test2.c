#include<stdio.h>

extern int global_num;		// test1.c에 선언된 전역변수를 사용하겠다. 라고 알리는 것

// 컴파일 및 실행은 main()가 있는 파일에서 하도록 한다.
// 물론 main()함수가 없는 파일에서 컴파일 및 실행을 해도 결과는 나오지만
// 원칙적으로 main()가 있는 파일에서 하는 것이 정석이다.

void out_func(void)
{
	global_num = -111;
	printf("\n[test2.c 파일에 구현된 외부 out_func()함수 영역\n");

	return;
}