/*
	���� 2
	���� ���뿡 �´� ���α׷��� �ۼ��Ͻÿ�.
	���� 3���� ���� �� �ʱ�ȭ : int�� ���� 2��, �������� ���� 1�� ����
	Ű����� ������ �Է¹޴´�.
	�Է��� ������ ��ȿ����(0~100)�� if-else������ �Ǻ��Ѵ�.
	�Է��� ������ ���� switch���� ����Ͽ� ����� ����϶�.

	 ���              ��������                    ���
	A+ ����     95�� �̻� 100�� ����     switch ������ A+ ��� �Ǻ�
	A0 ����     90�� �̻�  95�� �̸�     switch ������ A+ ��� �Ǻ�
	B+ ����     85�� �̻�  90�� �̸�     switch ������ A+ ��� �Ǻ�
	B0 ����     80�� �̻�  85�� �̸�     switch ������ A+ ��� �Ǻ�
	C+ ����     75�� �̻�  80�� �̸�     switch ������ A+ ��� �Ǻ�
	C0 ����     70�� �̻�  75�� �̸�     switch ������ A+ ��� �Ǻ�
	D+ ����     65�� �̻�  70�� �̸�     switch ������ A+ ��� �Ǻ�
	D0 ����     60�� �̻�  65�� �̸�     switch ������ A+ ��� �Ǻ�
	F  ����      0�� �̻�  60�� �̸�     switch ������ A+ ��� �Ǻ�
*/

#include<stdio.h>

int main(void) {
	int jumsu = 0;
	char* grade = NULL;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &jumsu);

	if (jumsu > 100 || jumsu < 0)
	{
		printf("������ ����(0~100)�� �Է����ּ���.\n");
		printf("���α׷��� �ٽ� �����ϼ���.\n");
	}
	
	int jumsu_div = 0;
	jumsu_div = jumsu / 5;

	switch (jumsu_div)
	{
		case 20:
		case 19:
			grade = "A+";
			break;
		case 18:
			grade = "A0";
			break;
		case 17:
			grade = "B+";
			break;
		case 16:
			grade = "B0";
			break;
		case 15:
			grade = "C+";
			break;
		case 14:
			grade = "C0";
			break;
		case 13:
			grade = "D+";
			break;
		case 12:
			grade = "D0";
			break;
		default:
			grade = "F";
			break;
	}
	printf("�Է��� ���� : %d\n", jumsu);
	printf("��� : %s", grade);

	return 0;
}