/*
	1차원 배열 int num[10] = {0}을 활용하여 아래와 같이 출력하도록 프로그램을 작성하시오.
	출력범위는 1~10개 사이로 한다.

	실행결과
	num[0] : **
	num[1] : ******
	num[2] : ****
	num[3] : ****
	num[4] : ****
	num[5] : ***
	num[6] : *****
	num[7] : *******
	num[8] : ***
	num[9] : *
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {

	int num[10] = { 0 };
	int i = 0, j = 0;
	srand((unsigned)time(NULL));
	
	//printf("%d", sizeof(num)/sizeof(int));
	
	for (i = 0; i < sizeof(num) / sizeof(int); i++) {
		num[i] = 1 + (rand() % 10);
		printf("num[%d] : ", i);

		// 내부루프(별 표 찍는 부분)
		for (j = 0; j < num[i]; j++) {
			printf("*");
		}
		printf("\n");

	}

	return 0;
}