/*
	���� 2
	���� ���뿡 �´� ���α׷��� �ۼ��ϼ���.
	����
	������ ���� 3�� ���� �� �ʱ�ȭ : int num1, num2, triple
	�Ǽ��� ���� 1�� ���� �� �ʱ�ȭ : float division
	Ű����� ������ 2�� �Է� : sapce bar ������ ���
	ù ��° ������ ���� ������ ������� �ۼ�
	ù ��° ������ �� ��° ������ ������ ����� �ۼ�
	�������� ������ ���� ������� ��� �ڸ��� : ��ü 8�ڸ�(���ڸ��� 0���� ä��)
	��� ���
	������ 2�� �Է� : 8 3
	������ ���� ��� : 8 * 8 * 8 = 00000512
	������ ���� ��� : 8 / 3 = 0002.667
*/

#include <stdio.h>

int main(void) {

	int num1=0, num2=0, triple=0;
	float division=0.0;

	printf("������ 2�� �Է� : ");
	scanf_s("%d %d", &num1, &num2);

	triple = num1 * num1 * num1;
	printf("������ ���� ��� : %d * %d * %d = %08d\n", num1, num1, num1, triple);

	division = (float)num1 / num2;
	printf("������ ���� ��� : %d / %d = %08.3f\n", num1, num2, division);

	return 0;
}