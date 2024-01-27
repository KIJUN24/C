/*
	인수 전달 방법(2가지)
	2. 참조에 의한 호출(call by reference)
	참조에 의한 호출방식은 함수를 호출할 때,
	인수값으로 값을 넘기는 것이 아니라 메모리 주소값을 넘긴다.
	주소값을 넘기기에 호출한 곳에 영향을 끼칠 수 밖에 없다.
	함수 호출 인수의 주소값과 매개변수의 주소값이 공유되기 때문에
	함수에서 어떠한 연산을 수행하면 호출한 곳에도 영향을 끼친다.
	C언어에서는 주소를 참조하여 함수를 호출하는 방식이 존재하지 않기 떄문에
	주소를 저장하는 포인터 변수와 인수값 앞에 &를 붙여서 호출야여야 한다.
*/

// 포인터 변수란 자신만의 메모리 공간을 4바이트 만들고 그 공간에는 값이 아닌 오로지 주소값만 저장할 수 있는 변수이다.

#include<stdio.h>

int call_reference(int* num);

int main(void)
{
	int num = 100, call_after = 0;
	
	printf("main()함수 영역\n");
	printf("호출 전> 함수 호출하기 전의 num 값 : %d\n", num);
	printf("호출 전> 함수 호출하기 전의 num 주소값 : %p\n", &num);

	printf("설명> 함수 호출 : 인수와 주소 참조 연산자 &를 함께 전달\n\n");

	call_after = call_reference(&num);	// 주소에 의한 사용자 정의 함수 호출

	printf("main()함수 영역 돌아옴\n");
	printf("호출 후> 함수 호출한 후의 num 값 : %d\n", num);
	printf("호출 후> 함수 호출한 후의 num 주소값 : %p\n", &num);
	printf("호출 후> 함수 호출한 후의 call_after 값 : %d\n", call_after);

	return 0;
}

// 사용자 정의 함수 구현
int call_reference(int* num)
// main()에서 주소값이 매개변수로 넘어오기 떄문에 매개변수를 포인터 변수로 선언하여 주소값을 저장한다.(주소 공유)
{
	printf("call_reference 영역\n");

	// *num은 주소값이 가리키는 곳의 간접 참조를 통하여 실제 값을 의미하는 것이고,
	// 주소값을 표식을 하고자 한다면 *를 없애야 한다.
	//printf("call_reference 영역의 num의 주소값 : %p\n", *num);
	printf("call_reference 영역의 num의 주소값 : %p\n", num);
	
	printf("함수 수행> 전달받은 주소의 저장된 값인 100 + 10 반환\n");

	*num += 10;

	printf("함수 수행 완료> main()로 반환 완료됨.\n\n");


	// 간접참조를 통한 실제 값을 main()에게 반환하고 있다.
	return *num;
}
