// ��������� ���� �ǽ�-2
// ��ǥ ��� ����

#include<stdio.h>

int main(void) {

	int star = 0, cnt = 0;

	for (cnt = 1; cnt <= 5; cnt++) {
		printf("%d�� : ", cnt);
		for (star = 1; star <= cnt; star++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}