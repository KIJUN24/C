#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// system()함수는 stdlib.h에 정의가 되어 있고, 용도는 실행창의 타이틀을 지정하기 위한 함수이다.
	system("title 정수형 데이터의 자릿수 지정");

	printf("|%d|", 113);
	printf(": 정수형 기본 자릿수\n", 113);

	printf("|%5d|", 113);
	printf(": 전체 자릿수 5개\n", 113);

	printf("|%05d|", 113);
	printf(": 전체 자릿수 5개, 빈 공간 0으로 채우기\n", 113);

	printf("|%-5d|", 113);
	printf(": 전체 자릿수 5개, -값으로 왼쪽 정렬, 빈 공간 0으로 채우기\n", 113);

	return 0;
}