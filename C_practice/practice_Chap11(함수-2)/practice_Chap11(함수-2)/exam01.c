/*
	함수 원형 종류에 대한 실습1 - 매개변수와 반환값이 모두 없는 함수
	매개변수와 반환값이 없는 사용자 정의 함수는 가장 간단하게 만들 수 있고
	주로 용도는 간단한 메시지를 출력하거나 단순한 명령문을 수행할 때 사용한다.
*/

#include<stdio.h>

void dash(void);

int main(void) {

	printf("main() 함수 영역\n");
	printf("지금 출력되고 있는 것은 메인함수 입니다.\n\n");

	dash();

	printf("다시 main()함수 입니다.\n");

	return 0;
}

void dash(void) {
	printf("지금부터는 dash()함수 입니다.\n");
	printf("--------------\n");
	printf("여기까지가 dash()함수 입니다.\n\n");
}
