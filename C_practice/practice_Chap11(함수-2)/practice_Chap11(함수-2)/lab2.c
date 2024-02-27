/*
	����-2
	���� ��ȯ ���(���ѷ��� ���)
	1. km/h�� mile/h�� ȯ���ϴ� �Լ�
	2. kg�� lb�� ȯ���ϴ� �Լ�
	3. Ż���ڵ�
	4. �����ڵ带 ��½�Ű�� �ڵ�
	
	������
	A. km/h -> mile/h ȯ�� ���α׷�
	B. kg -> lb ȯ�� ���α׷�
	Q. ���α׷� ����

	���� : a
	A.km/h -> mile/h ȯ�� ���α׷�
	��> �ӵ�(km/h)�� �Է��ϼ��� : 77

	[km/h�� mile/h�� ȯ���ϴ� �Լ� ȣ��]

	��>77.0000km/h�� 47.84557mile/h�Դϴ�.

	���������� ȯ���� �����Ͽ����ϴ�.
*/

#include<stdio.h>
#define MILE 1.609344
#define LB 0.45359237

double exchange_mile(int km);
double exchange_lb(int kg);
void exit();
void choice_error(void);

int main(void)
{
	char choice_ch = ' ';
	int km = 0, kg = 0;
	double result_mile = 0.0f, result_lb = 0.0f;

	do
	{

		printf("A. km/h -> mile/h ȯ�� ���α׷�\n");
		printf("B. kg -> lb ȯ�� ���α׷�\n");
		printf("Q. ���α׷� ����\n");
		printf("\n");
		printf("���� : ");
		scanf_s("%c", &choice_ch, sizeof(char));
	
		switch (choice_ch)
		{
			case 'A':
			case 'a':
				printf("��> �ӵ�(km/h)�� �Է��ϼ��� : ");
				scanf_s("%d", &km);
				result_mile = exchange_mile(km);
				printf("��> %dKm�� %lfMile�Դϴ�.\n", km, result_mile);
				printf("���������� ȯ���� �����Ͽ����ϴ�.\n\n\n\n");
				break;

			case 'B':
			case 'b':
				printf("��> Kg�� �Է��ϼ��� : ");
				scanf_s("%d", &kg);
				result_lb = exchange_lb(kg);
				printf("��> %dKg�� %lflb�Դϴ�.\n", kg, result_lb);
				printf("���������� ȯ���� �����Ͽ����ϴ�.\n\n\n\n");
				break;
			
			case 'Q':
			case 'q':
				exit();
				break;

			default:
				choice_error();
				break;
		}
		if (choice_ch == 'Q' || choice_ch == 'q')
		{
			break;
		}
		getchar();
	} while (1);

	return 0;
}

double exchange_mile(int km)
{
	double result_mile = 0.0f;
	printf("\n[km/h�� mile/h�� ȯ���ϴ� �Լ� ȣ��]\n");
	result_mile = km / MILE;
	//result_mile = km / 1.609344;

	return result_mile;
}


double exchange_lb(int kg)
{
	double result_lb = 0.0f;
	printf("\n[kg�� lb�� ȯ���ϴ� �Լ� ȣ��]\n");
	result_lb = kg / LB;

	return result_lb;
}


void exit()
{
	printf("���α׷��� �����մϴ�.\n");
	return;
}


void choice_error()
{
	printf("������ �ٽ� ���ּ���.\n\n\n");
	return;
}