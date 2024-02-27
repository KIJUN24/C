/*
	문제 6
	숫자 삼각형

	출력결과
		1
	   123
	  12345
	 1234567
	123456789
*/

#include<stdio.h>

int main(void) {

	int i = 0, j = 0, k = 0;

	for (i = 0 ; i < 5 ; i++) {
		// 내부루프(공백이 하나씩 줄어듬)
		for (j = 0 ; j < 4-i ; j++) {
			printf(" ");
		}
		// 내부루프(숫자)
		for (k = 1; k < (i + 1) * 2; k++) {
			printf("%d", k);
		}
		printf("\n");
	}

	return 0;
}