// �Լ� ���� ������ ���� �ǽ�5 - ��ȯ��(���ϰ�)�� �Ű������� ��� �����ϴ� �Լ�

// Ű����κ��� �Է��� �޾Ƽ� �����ϴ� ����

#include<stdio.h>

int sum(int x);

int main(void) {

	int input = 0;
	int result = 0;

	printf("[main() �Լ� ����]\n");
	printf("���ڸ� �Է����ּ��� : ");
	scanf_s("%d", &input);

	result = sum(input);

	printf("[main() �Լ� �ٽ� ����]\n");
	printf("1���� %d������ ���� %d�Դϴ�.\n", input, result);
	printf("[main() �Լ� ����]\n");

	return 0;
}

int sum(int x) {

	int cnt = 0, hap = 0;

	printf("[sum() �Լ� ����]\n");

	for (cnt = 1; cnt <= x; cnt++) {
		hap += cnt;
	}
	printf("[sum() �Լ� ��� �� ����]\n");

	return hap;
}