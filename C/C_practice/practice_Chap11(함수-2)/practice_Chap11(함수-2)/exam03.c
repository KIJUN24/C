/*
	�Լ� ���� ������ ���� �ǽ�3 - �Ű������� �����ϴ� �Լ�
	�Ű������� �����ϴ� �Լ��� ����Ÿ�� ���� void�� �� ���̸�
	�Լ����� ȣ���� �Ͼ ��, �Ű������� Ÿ�԰� ������ �°Բ� ȣ���� �̷������ ������ ����.
*/

// main()���� ��ġ(inch)�� �Է¹��� �� �Լ�ȣ���� ���� ��Ƽ����(cm)�� ȯ���� ������� ����ϴ� ����

#include<stdio.h>
#define INCH 2.5399		// ��ũ�� ��� ����

void exchange(float inch);

int main(void) {

	float input = 0.0f;

	printf("��ġ(inch)�� ��Ƽ����(cm)�� ȯ��\n");
	printf("��ġ�� �Է��ϼ��� : ");
	scanf_s("%f", &input);
	printf("\n");
	exchange(input);
	printf("\n");
	return 0;
}

// ����� ���� �Լ�����
// ����Ÿ���� ���� �Լ��� ���� �Լ�ȣ�� �� ȣ��� �Լ� �ȿ��� ����� ��°���� ���� ����Ǵ� ��찡 ����.

void exchange(float inch) {

	float result = 0.0f;
	result = inch * INCH;

	printf("[exchange() �Լ� ����]\n");
	printf("����> ���� ȯ�� : %.2f ��ġ�� %.2f ��Ƽ���� �Դϴ�.\n", inch, result);

	return;
}
