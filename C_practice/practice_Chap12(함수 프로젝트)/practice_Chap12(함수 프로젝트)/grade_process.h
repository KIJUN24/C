#include<stdio.h>
#include<stdlib.h>	// exit() �Լ��� ����ϱ� ���� ������.

void score_fun();
char grade_fun(int jumsu);
char alpha_err(char op);
void jumsu_err(int jumsu);
void end_fun(char op);

void score_fun()
{
	int jumsu_m = 0, jumsu_f = 0, total = 0;	// ���������� �ݵ�� �ʱ�ȭ�� ��Ģ�̴�.

	printf("\n[score_fun()�Լ� ����]\n");

	printf("�߰���� ���� �Է�(50�� ����) : ");
	scanf_s("%d", &jumsu_m);
	if (jumsu_m < 0 || jumsu_m > 50)
	{
		jumsu_err(jumsu_m);
	}
	else
	{
		total += jumsu_m;	// ���� ����
	}

	printf("�⸻��� ���� �Է�(50�� ����) : ");
	scanf_s("%d", &jumsu_f);
	if (jumsu_f < 0 || jumsu_f > 50)
	{
		jumsu_err(jumsu_f);
	}
	else
	{
		total += jumsu_f;	// ���� ����
		grade_fun(total);
		getchar();
		printf("\n");
		main();		// ������ ������ ������ grade_fun()�Լ��� ������ ��������Ƿ� main()�� ȣ��
	}

	return;
}

char grade_fun(int jumsu)
{
	printf("\n[grade_fun()�Լ� ����]\n");

	if (jumsu >= 95 && jumsu <= 100)
	{
		printf("score_fun() �Լ��� ���޹��� ���� : %d\n", jumsu);
		return printf("���� : A+���� \n\n");
	}
	else if (jumsu >= 90 && jumsu <= 94)
	{
		printf("score_fun() �Լ��� ���޹��� ���� : %d\n", jumsu);
		return printf("���� : A0���� \n\n");
	}
	else if (jumsu >= 85 && jumsu <= 89)
	{
		printf("score_fun() �Լ��� ���޹��� ���� : %d\n", jumsu);
		return printf("���� : B+���� \n\n");
	}
	else if (jumsu >= 80 && jumsu <= 84)
	{
		printf("score_fun() �Լ��� ���޹��� ���� : %d\n", jumsu);
		return printf("���� : B0���� \n\n");
	}
	else if (jumsu >= 75 && jumsu <= 79)
	{
		printf("score_fun() �Լ��� ���޹��� ���� : %d\n", jumsu);
		return printf("���� : C+���� \n\n");
	}
	else if (jumsu >= 70 && jumsu <= 74)
	{
		printf("score_fun() �Լ��� ���޹��� ���� : %d\n", jumsu);
		return printf("���� : C0���� \n\n");
	}
	else if (jumsu >= 65 && jumsu <= 69)
	{
		printf("score_fun() �Լ��� ���޹��� ���� : %d\n", jumsu);
		return printf("���� : D+���� \n\n");
	}
	else if (jumsu >= 60 && jumsu <= 64)
	{
		printf("score_fun() �Լ��� ���޹��� ���� : %d\n", jumsu);
		return printf("���� : D0���� \n\n");
	}
	else
	{
		printf("score_fun() �Լ��� ���޹��� ���� : %d\n", jumsu);
		return printf("���� : F���� \n\n");
	}
}

char alpha_err(char op)
{
	printf("\n[alpha_err()�Լ� ����]\n");


	return printf("main()�Լ����� �Է��� ���ĺ� %c�� ��ȿ���� �ʽ��ϴ�.\n\n", op);
}

void jumsu_err(int jumsu)
{
	printf("\n[jumsu_err()�Լ� ����]\n");
	printf("���� %d��(��) ��ȿ������ �ƴմϴ�.\n\n", jumsu);
	return;
}

void end_fun(char op)
{
	printf("\n[end_fun()�Լ� ����]\n");
	printf("main()�Լ����� ���α׷� ���Ḧ ��û�߽��ϴ�.\n");
	printf("���ĺ� \"%c\"��(��) ���޹޾� ���α׷��� �����մϴ�.\n", op);
	exit(0);	// �ش� ���μ����� kill�ϴ� �Լ�.
}