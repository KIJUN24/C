#include<stdio.h>

int main(void) {
	int jumsu = 0;
	char grade = ' ';

	printf("A���� : 90���̻� ~ 100�� ����\n");
	printf("B���� : 80���̻� ~ 90�� �̸�\n");
	printf("C���� : 70���̻� ~ 80�� �̸�\n");
	printf("D���� : 60���̻� ~ 70�� �̸�\n");
	printf("F���� : 0���̻� ~ 60�� �̸�\n");

	printf("���� �Է� : ");
	scanf_s("%d", &jumsu);

	if (jumsu > 100 || jumsu < 0)
	{
		printf("�Է��� ������ ��뱸��(0~100)�� �ƴմϴ�.\n");
		printf("���α׷��� �ٽ� �����ϼ���.\n");
	}

	switch (jumsu / 10)
	{
		case 10:
		case 9:
			grade = 'A';
			break;
		case 8:
			grade = 'B';
			break;
		case 7:
			grade = 'C';
			break;
		case 6:
			grade = 'D';
			break;
		default:
			grade = 'F';
			break;
	}

	printf("���� ��� : %c����\n", grade);

	return 0;
}