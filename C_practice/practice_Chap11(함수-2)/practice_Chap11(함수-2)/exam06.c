/*
	�Լ� ���� ������ ���� �ǽ�6 - ��ȯ�� ���� �Լ�
	������ 2������ �����Ѵ�.
	1. �Ű������� ���� void�� �Լ�
	2. �Ű������� �ִ� void�� �Լ�
	��ȯ���� �������� �ʴµ� ȣ���� ������ ��ȯ���� �䱸�ϴ� ������ ������ �����ϸ� ������ �߻���
*/

#include<stdio.h>

void test(int num1, int num2);

int main(void) {

	int x = 10, y = 30, hap = 0;

	printf("void���� ������ ������ ����ϸ� ������ �߻��մϴ�.\n");
	printf("[main()�Լ� ����]\n");
	printf("�� ���� ���� ���ϴ� �Լ� ȣ��\n");

	// hap = test(x, y); ������ �߻��ϴ� �κ�
	test(x, y);

	return 0;
}

void test(int num1, int num2) {

	int sum = 0;
	sum = num1 + num2;
	printf("[test() �Լ� ����]\n");
	printf("�� ���� �� : %d\n", sum);
	return;
}
