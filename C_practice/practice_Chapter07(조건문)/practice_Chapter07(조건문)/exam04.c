#include<stdio.h>

int main(void) {
	int jumsu = 0;

	printf("�����Է� �Է� : ");
	scanf_s("%d", &jumsu);

	if (jumsu >= 90 && jumsu <= 100)
	{
		printf("�Է��� ������ %d�̰�\n", jumsu);
		printf("������ %c�Դϴ�.\n", 'A');
	}
	else if (jumsu >= 75 && jumsu <= 89)
	{
		printf("�Է��� ������ %d�̰�\n", jumsu);
		printf("������ %c�Դϴ�.\n", 'B');
	}
	else if (jumsu >= 60 && jumsu <= 74)
	{
		printf("�Է��� ������ %d�̰�\n", jumsu);
		printf("������ %c�Դϴ�.\n", 'C');
	}
	else if (jumsu >= 45 && jumsu <= 59)
	{
		printf("�Է��� ������ %d�̰�\n", jumsu);
		printf("������ %c�Դϴ�.\n", 'D');
	}
	else if (jumsu >= 0 && jumsu <= 44)
	{
		printf("�Է��� ������ %d�̰�\n", jumsu);
		printf("������ %c�Դϴ�.\n", 'F');
	}
	else
	{
		printf("0~100 ���ڸ� �Է����ּ���.\n");
	}

	return 0;
}