/*
	인수 전달 방법(2가지)
	1. 값에 의한 호출(call by value)
	사용자 정의 함수를 호출할 때, 인수의 값 자체를 전달하는 것이고,
	이 전달된 값은 함수의 배개변수 공간에 복사되어 명령이 수행된다.
	함수를 종료하더라도 호출한 곳에서는 전혀 영향을 받지 않는다.
	함수 호출을 할 때는 무조건 매개변수의 개수와 타입이 일치해야 한다.

	call by value의 예
	A : "동생아 지금 몇 시니?"
	B : "4시에요"
	---> 시간의 값은 알지만 수정이 불가하다.
*/

#include<stdio.h>

// 함수 선언(원형)
int call_value(int su);

int main(void)
{
	int num = 100, call_after = 0;

	printf("main() 함수 영역\n");
	printf("함수호출 전> num의 값 : %d\n", num);
	printf("함수호출 전> num의 주소값 : %p\n", &num);
	printf("함수호출 전> call_after의 값 : %d\n", call_after);
	printf("함수호출 전> call_after의 주소값 : %p\n", &call_after);

	call_after = call_value(num);	// call by value

	printf("main()함수 영역으로 돌아옴\n");

	printf("함수호출 후> num의 값 : %d\n", num);
	printf("함수호출 후> num의 주소값 : %p\n", &num);
	printf("함수호출 후> call_after의 값 : %d\n", call_after);
	printf("함수호출 후> call_after의 주소값 : %p\n", &call_after);


	return 0;
}

// 사용자 정의 함수 구현
int call_value(int num)
{
	printf("call_value() 함수 영역\n");
	printf("복사되어진 num의 값 : %d\n", num);
	printf("call_value()의 num 주소값 : %p\n", &num);
	printf("함수 수행> 복사된 값 100에 10을 더해 main()로 반환함\n");

	num += 10;
	printf("함수 수행 완료> main()로 반환 완료됨\n");

	return num;
}
