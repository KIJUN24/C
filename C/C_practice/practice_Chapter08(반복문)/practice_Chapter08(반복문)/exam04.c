// for �� �ǽ� - 4(5�� ����� ���� �հ�)

#include<stdio.h>

int main(void) {

	int hap = 0;
	int i = 0;

	printf("�������� 5�� ����� ���ұ�� : ");
	scanf_s("%d", &i);

	for (i = 0; i < 101; i += 5) {
		hap += i;
		printf("%d��°���� ������ : %d\n", i, hap);
	}
	printf("\n\n");
	printf("5�� ��� ���� ���� �հ� : %d", hap);
	
	return 0;
}