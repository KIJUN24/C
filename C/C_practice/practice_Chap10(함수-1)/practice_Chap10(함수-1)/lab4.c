/*
	����4 - ���⸦ ����� ����.
	�Ʒ��� ���� �Լ� 5���� �����ϴ� ����, ȣ��, ������ ����.
	���ѷ����� ����ϵ��� �Ѵ�. ��� �и��� ��������.
	double add(int x, int y)
	double sub(int x, int y)
	double mul(int x, int y)
	double div(int x, int y)
	int remain(int x, int y)

	��°��
	�� ���� �Է��ϼ��� : 10, 5
	�����ڸ� �����ϼ��� (+, -, *, /, %) : *
	���� �Լ� ȣ�� �� 50.0�Դϴ�.
	��� �����Ͻðڽ��ϱ�? (Y / N) : y

	�� ���� �Է��ϼ��� : 20, 30
	�����ڸ� �����ϼ��� (+, -, *, /, %) : +
	���� �Լ� ȣ�� �� 50.0�Դϴ�.
	��� �����Ͻðڽ��ϱ�? (Y / N) : n
	���� ���α׷��� �����մϴ�.
*/

#include "my_calculator.h"

double add(int x, int y);
double sub(int x, int y);
double mul(int x, int y);
double div(int x, int y);
int remain(int x, int y);

int main(void) {

	int num1 = 0, num2 = 0, result_remain = 0;
	double	result = 0;
	char get_choice = ' ', yorn = ' ';

	while (1) {

		printf("�� ���� �Է��ϼ��� : ");
		scanf_s("%d %d", &num1, &num2);
		getchar();
		printf("�����ڸ� �����ϼ��� : ");
		scanf_s("%c", &get_choice, sizeof(char));

		switch(get_choice) {
			case '+':
				result = add(num1, num2);
				printf("���� �Լ� ȣ�� �� %.1lf�Դϴ�.\n", result);
	re:			getchar();

				printf("������ ��� �Ͻðڽ��ϱ�?");
				scanf_s("%c", &yorn, sizeof(char));
				if (yorn == 'y' || yorn == 'Y') {
					continue;
				}
				else if (yorn == 'n' || yorn == 'N') {
					printf("���� ���α׷��� �����մϴ�.\n");
					break;
				}
				else {
					printf("�߸��� �Է°��Դϴ�.\n");
					printf("�ٽ� �Է����ּ���\n");
					goto re;
				}
				break;


			case '-':
				result = sub(num1, num2);
				printf("���� �Լ� ȣ�� �� %.1lf�Դϴ�.\n", result);
				getchar();

				printf("������ ��� �Ͻðڽ��ϱ�?");
				scanf_s("%c", &yorn, sizeof(char));
				if (yorn == 'y' || yorn == 'Y') {
					continue;
				}
				else if (yorn == 'n' || yorn == 'N') {
					printf("���� ���α׷��� �����մϴ�.\n");
					break;
				}
				else {
					printf("�߸��� �Է°��Դϴ�.\n");
					printf("�ٽ� �Է����ּ���\n");
					goto re;
				}
				break;


			case '*':
				result = mul(num1, num2);
				printf("���� �Լ� ȣ�� �� %.1lf�Դϴ�.\n", result);
				getchar();

				printf("������ ��� �Ͻðڽ��ϱ�?");
				scanf_s("%c", &yorn, sizeof(char));
				if (yorn == 'y' || yorn == 'Y') {
					continue;
				}
				else if (yorn == 'n' || yorn == 'N') {
					printf("���� ���α׷��� �����մϴ�.\n");
					break;
				}
				else {
					printf("�߸��� �Է°��Դϴ�.\n");
					printf("�ٽ� �Է����ּ���\n");
					goto re;
				}
				break;


			case '/':
				result = div(num1, num2);
				printf("������ �Լ� ȣ�� �� %.1lf�Դϴ�.\n", result);
				getchar();

				printf("������ ��� �Ͻðڽ��ϱ�?");
				scanf_s("%c", &yorn, sizeof(char));
				if (yorn == 'y' || yorn == 'Y') {
					continue;
				}
				else if (yorn == 'n' || yorn == 'N') {
					printf("���� ���α׷��� �����մϴ�.\n");
					break;
				}
				else {
					printf("�߸��� �Է°��Դϴ�.\n");
					printf("�ٽ� �Է����ּ���\n");
					goto re;
				}
				break;


			case '%':
				result_remain = remain(num1, num2);
				printf("������ �Լ� ȣ�� �� %d�Դϴ�.\n", result_remain);
				getchar();

				printf("������ ��� �Ͻðڽ��ϱ�?");
				scanf_s("%c", &yorn, sizeof(char));
				if (yorn == 'y' || yorn == 'Y') {
					continue;
				}
				else if (yorn == 'n' || yorn == 'N') {
					printf("���� ���α׷��� �����մϴ�.\n");
					break;
				}
				else {
					printf("�߸��� �Է°��Դϴ�.\n");
					printf("�ٽ� �Է����ּ���\n");
					goto re;
				}
				break;


			default:
				printf("�ٽ� �Է����ּ���\n");
				printf("��� ������ �����Ͻðڽ��ϱ�?");
				scanf_s("%c", &yorn, sizeof(char));
				getchar();
				break;
		}
		if (yorn == 'n' || yorn == 'N') {
			break;
		}
	}

	return 0;
}