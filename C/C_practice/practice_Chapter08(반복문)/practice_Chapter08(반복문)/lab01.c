/*
	���� 1(for��)
	������ ������ 2�� �����Ͽ�, 1~100���� ������ ���µ� �������� 3000�̳� 3000�̻��� �� ��, ������ ���������� ���α׷��� �ۼ��Ͻÿ�.
	���� ���
	1~73 �� : 3003
*/

#include<stdio.h>

//int main(void) {
//
//	int sum = 0, i = 0;
//
//	for (i = 1 ; sum <= 3000 ; i++) {
//		sum += i;
//	}
//	printf("%d~%d �� : %d\n", 1, i, sum);
//	return 0;
//}

int main(void) {

	int i = 0, sum = 0;

	for (i = 1; i <= 100; i++) {
		sum += i;
		printf("i : %d, sum : %d\n", i, sum);

		if (sum >= 3000) {
			break;
		}
	}
	printf("1~%d �� : %d\n", i, sum);
	return 0;
}