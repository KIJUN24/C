#include<stdio.h>
#include<string.h>

int main(void) {
	int jumsu = 0;
	// grade(�迭��)�� �ּҴ�.
	// ������, �迭���� ������ ���� �ּҰ��� ����� �ϱ� ������ ������ ����� �ش��ϴ� ���̴�.
	// ��� ���� �����ΰ��� �����ϸ�, C2106�̶� ���� �ڵ尡 �߻��Ѵ�.
	// char grade[3] = {0};

	char* p_grade = NULL;

	printf("����� ���� ������ �Է��ϼ��� : ");
	scanf_s("%d", &jumsu);

	//��ø if���� �̿��Ͽ� ������ �����ϴ� �ڵ�
	if (jumsu >= 90 && jumsu <= 100)
	{
		if (jumsu >= 95)
		{
			p_grade = "A+";
			printf("����� ������ %s�Դϴ�.\n", p_grade);
		}
		else {
			p_grade = "A-";
			printf("����� ������ %s�Դϴ�.\n", p_grade);
		}
	}
	else if (jumsu >= 75 && jumsu < 89)
	{
		if (jumsu >= 85)
		{
			p_grade = "B+";
			printf("����� ������ %s�Դϴ�.\n", p_grade);
		}
		else {
			p_grade = "B-";
			printf("����� ������ %s�Դϴ�.\n", p_grade);
		}
	}
	else if (jumsu >= 60 && jumsu < 74)
	{
		if (jumsu >= 70)
		{
			p_grade = "C+";
			printf("����� ������ %s�Դϴ�.\n", p_grade);
		}
		else {
			p_grade = "C-";
			printf("����� ������ %s�Դϴ�.\n", p_grade);
		}
	}
	else if (jumsu >= 45 && jumsu < 59)
	{
		if (jumsu >= 53)
		{
			p_grade = "D+";
			printf("����� ������ %s�Դϴ�.\n", p_grade);
		}
		else {
			p_grade = "D-";
			printf("����� ������ %s�Դϴ�.\n", p_grade);
		}
	}
	else if (jumsu >= 0 && jumsu < 44)
	{
		p_grade = "F";
		printf("����� ������ %s�Դϴ�.\n", p_grade);
	}

	return 0;
}