#include <stdio.h>

int main(void)
{
	//// ������ ź�ٰ� ����, �л� /  �Ϲ������� ���� (�Ϲ��� : 20�� �̻�)
	//int age = 15;
	//if (age >= 20)
	//	printf("�Ϲ���");
	//else
	//	printf("�л�");

	// �� / �� / ��
	int age = 25;
	//if (17 <= age <= 19)
	if (age >= 17 && age <= 19)
	{
		printf("���");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("�ߵ�");
	}
	else if (age >= 8 && age <= 13)
	{
		printf("�ʵ�");
	}
	else if (19 < age)
	{
		printf("����");
	}
	else
	{
		printf("��� / ��ġ��");
	}
	return 0;
}