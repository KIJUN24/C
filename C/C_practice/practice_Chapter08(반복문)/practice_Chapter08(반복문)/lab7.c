/*
	����7
	���� �ﰢ���� �������� �ٲٱ�

	��°��
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
		// ���η���(������ �ϳ��� �پ��)
		for (j = 0; j < 5-i ; j++) {
			printf(" ");
		}
		// ���η���(����)
		for (k = 1; k < i * 2; k++) {
			printf("%d", k);
		}
		printf("\n");
	}

	return 0;
}