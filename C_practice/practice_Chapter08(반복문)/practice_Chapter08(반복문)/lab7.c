/*
	문제7
	숫자 삼각형을 역순으로 바꾸기

	출력결과
	123456789
	 1234567
	  12345
	   123
	    1
*/

#include<stdio.h>

int main(void) {

	int i = 0, j = 0, k = 0;

	for (i = 5; i > 0 ; i--) {
		// 내부루프(공백이 하나씩 줄어듬)
		for (j = 0; j < 5-i ; j++) {
			printf(" ");
		}
		// 내부루프(숫자)
		for (k = 1; k < i * 2; k++) {
			printf("%d", k);
		}
		printf("\n");
	}

	return 0;
}