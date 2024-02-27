/*
	함수 원형 종류에 대한 실습3 - 매개변수만 존재하는 함수
	매개변수만 존재하는 함수는 리턴타입 역시 void가 될 것이며
	함수에서 호출이 일어날 때, 매개변수의 타입과 개수에 맞게끔 호출이 이루어져야 에러가 없다.
*/

// main()에서 인치(inch)를 입력받은 후 함수호출을 통해 센티미터(cm)로 환산해 결과값을 출력하는 예제

#include<stdio.h>
#define INCH 2.5399		// 매크로 상수 선언

void exchange(float inch);

int main(void) {

	float input = 0.0f;

	printf("인치(inch)를 센티미터(cm)로 환산\n");
	printf("인치를 입력하세요 : ");
	scanf_s("%f", &input);
	printf("\n");
	exchange(input);
	printf("\n");
	return 0;
}

// 사용자 정의 함수구현
// 리턴타입이 없는 함수는 거의 함수호출 후 호출된 함수 안에서 연산과 출력결과가 같이 수행되는 경우가 많다.

void exchange(float inch) {

	float result = 0.0f;
	result = inch * INCH;

	printf("[exchange() 함수 영역]\n");
	printf("수행> 단위 환산 : %.2f 인치는 %.2f 센티미터 입니다.\n", inch, result);

	return;
}
