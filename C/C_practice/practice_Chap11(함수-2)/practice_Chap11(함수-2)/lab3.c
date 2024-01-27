/*
	����-3
	�ּҿ� ���� ȣ�� ����� �̿��ϴ� ����(call by reference)
	����ڷκ��� 2���� �Ǽ����� �Է¹ް� �����ڵ� �Է��� �޾�
	�Ʒ� �Լ� ����κп� �°Բ� �ڵ带 �ۼ��Ѵ�.
	�Լ��� ����
	double add(double* num1, double* num2);
	double sub(double* num1, double* num2);
	double mul(double* num1, double* num2);
	double div(double* num1, double* num2);

	���� ���
	�� ���� �Ǽ��� �Է����ּ���(, ������ ���) : 10.55, 55.579
	�����ڸ� �Է��ϼ���(+, -, *, /) : +
	10.55 + 55.58 = 66.13
	��� �����Ͻðڽ��ϱ�(Y / N) : n
	���α׷��� �����մϴ�.
*/

#include<stdio.h>

double add(double* num1, double* num2);
double sub(double* num1, double* num2);
double mul(double* num1, double* num2);
double div(double* num1, double* num2);

int main(void)
{
	double input_num1 = 0.0, input_num2 = 0.0;
	double result = 0.0;
	char choice_cul = ' ', yn = ' ';

	while (1)
	{
		// �Ǽ� �Է�
		printf("�� ���� �Ǽ��� �Է����ּ���(, ������ ���) : ");
		scanf_s("%lf, %lf", &input_num1, &input_num2);
		// �Ǽ� �Է� scanf_s Ȯ�ο�
		//printf("%.2lf %.2lf\n", input_num1, input_num2);
		getchar();
		
re1:		// ������ �Է�
		printf("�����ڸ� �Է��ϼ���(+, -, *, /) : ");
		scanf_s("%c", &choice_cul, sizeof(char));
		// ������ �Է� scanf_s Ȯ�ο�
		//printf("%c\n", choice_cul);
		
		switch (choice_cul)
		{
			case '+':
				result = add(&input_num1, &input_num2);
				printf("%.2lf + %.2lf = %.2lf\n", input_num1, input_num2, result);
				/*printf("��� �����Ͻðڽ��ϱ�? (Y / N) : ");
				scanf_s("%c", &yn, sizeof(yn));*/
				getchar();

				break;

			case '-':
				result = sub(&input_num1, &input_num2);
				printf("%.2lf - %.2lf = %.2lf\n", input_num1, input_num2, result);
				/*printf("��� �����Ͻðڽ��ϱ�? (Y / N) : ");
				scanf_s("%c", &yn, sizeof(yn));*/
				getchar();
				break;

			case '*':
				result = mul(&input_num1, &input_num2);
				printf("%.2lf * %.2lf = %.2lf\n", input_num1, input_num2, result);
				/*printf("��� �����Ͻðڽ��ϱ�? (Y / N) : ");
				scanf_s("%c", &yn, sizeof(yn));*/
				getchar();
				break;

			case '/':
				result = div(&input_num1, &input_num2);
				printf("%.2lf / %.2lf = %.2lf\n", input_num1, input_num2, result);
				/*printf("��� �����Ͻðڽ��ϱ�? (Y / N) : ");
				scanf_s("%c", &yn, sizeof(yn));*/
				getchar();
				break;

			default:
				printf("�ٽ� �Է����ּ���\n");
				goto re1;
		}

re2:
		printf("��� �����Ͻðڽ��ϱ�? (Y / N) : ");
		scanf_s("%c", &yn, sizeof(char));
		if (yn == 'Y' || yn == 'y')
		{
			getchar();
			continue;
		}
		else if (yn == 'N' || yn == 'n')
		{
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
		else
		{
			printf("�ٽ� �Է����ּ���\n");
			getchar();
			goto re2;
		}
	}

	return 0;
}

// *�� ������ ������ ����Ű�� �ִ� ������ �ּҰ��� �ǹ��Ѵ�.
// *�� ���̸� ���������� ���Ͽ� ������ ����� ���� �ǹ��Ѵ�.

double add(double* num1, double* num2)
{
	double result_add = 0.0f;

	result_add = *num1 + *num2;

	return result_add;
}

double sub(double* num1, double* num2)
{
	double result_sub = 0.0f;

	result_sub = *num1 - *num2;

	return result_sub;
}

double mul(double* num1, double* num2)
{
	double result_mul = 0.0f;

	result_mul = *num1 * *num2;

	return result_mul;
}

double div(double* num1, double* num2)
{
	double result_div = 0.0f;
	
	result_div = *num1 / *num2;

	return result_div;
}