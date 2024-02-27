// 사용자 정의 함수에 대한 실습-2
// 2단계 과정을 거치는 함수를 선언 및 구현, 호출하는 프로그램

// 비록 2단계 과정을 거치는 함수를 이용하면 코드도 짧아지고 간결해진다.
// 하지만 2단계보다 3단계를 권장한다.
// 그 이유는 C언어는 이식성이 좋기 때문에 다른 언어와의 호환을 위해서이다.


#include<stdio.h>

// 사용자 정의 함수 구현
int add(int num1, int num2) {
	int result = 0;
	printf("[add()함수 영역]\n\n");
	printf("수행> 덧셈 연산 결과를 main()함수에 반환\n");
	result = num1 + num2;

	return result;	// 리턴타입이 int이기 떄문에 result도 int타입인 것이다.
}

int main(void) {

	int x = 10, y = 50;
	int hap = 0;

	printf("매개변수 2개의 덧셈 연산\n");
	printf("[main() 함수 영역]\n");
	printf("전달> %d과 %d을 add()함수에 전달\n", x, y);

	hap = add(x, y);	// add(x, y)를 호출하면서 add()의 매개변수로 값이 복사가 된다.(call by value)

	printf("[main() 함수 영역]\n");
	printf("결과> %d과 %d의 덧셈 결과 : %d\n", x, y, hap);


	return 0;
}

