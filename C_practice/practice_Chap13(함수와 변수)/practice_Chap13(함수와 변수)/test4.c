#include<stdio.h>

// static 키워드를 함수 반환값 앞에 선언함.


// 오류 발생함
/*
	 static 키워드를 함수 반환값 앞에 선언하면
	 외부에서 참조를 하지 못하고 
	 static키워드는 오로지 해당 파일 안에서만 사용할 수 있는 것을 볼 수 있다.
*/
//static void global_function1()
//{
//	printf("global_function1()함수가 호출됨\n");
//	return;
//}

void global_function1()
{
	printf("global_function1()함수가 호출됨\n");
	return;
}

void global_function2()
{
	printf("global_function2()함수가 호출됨\n");
	return;
}