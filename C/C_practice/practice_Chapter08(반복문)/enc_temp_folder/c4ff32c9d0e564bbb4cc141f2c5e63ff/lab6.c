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

	int i = 0, j = 0, cnt = 0;

	for (i = 0 ; i <= 3 ; i++) {
		for (j = 0; j <= i; j--) {
			printf("%d", i);
		}
		printf("\n");
	}

	return 0;
}