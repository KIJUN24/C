// �����Լ��� ���� �ǽ�-2(fabs �Լ�)
// fabs() : �Ű������� ���� ���� ������ ������ִ� �Լ�

#include<stdio.h>
#include<math.h>

int main(void) {
	double result = 0.0, result_abs = 0.0, weight1 = 0.0, weight2 = 0.0;

	printf("�� ������ �Է� : ");
	scanf_s("%lf", &weight1);

	printf("�� ��� ������ �Է� : ");
	scanf_s("%lf", &weight2);

	result = weight1 - weight2;	// ������ ���� �� ����.
	printf("[���� ����] %.2f - %.2f = %.2f\n", weight1, weight2, result);

	result_abs = fabs(result);
	printf("���� ���� ������ ���� : %.2f\n", result_abs);

	return 0;
}