/*
	1���� �迭 int num[10] = {0}�� Ȱ���Ͽ� �Ʒ��� ���� ����ϵ��� ���α׷��� �ۼ��Ͻÿ�.
	��¹����� 1~10�� ���̷� �Ѵ�.

	������
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

		// ���η���(�� ǥ ��� �κ�)
		for (j = 0; j < num[i]; j++) {
			printf("*");
		}
		printf("\n");

	}

	return 0;
}