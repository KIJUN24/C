// �����Լ��� ���� �ǽ�-2(fabs �Լ�)
// pow() : �Ű������� 2���ε� �ϳ��� ������ �� ����� �ǰ�, �� �ϳ��� ����(��)�� �ȴ�. �Ͽ� �������� ���Ѵ�.
// sqrt() : �Ű������� ���� �������� ���ϴ� �Լ�

#include<stdio.h>
#include<math.h>

int main(void) {

	int choice = 0;
	double result = 0.0, num1 = 0.0, num2 = 0.0;

	do {
		printf("1.������ ��� ���α׷�\n");
		printf("2.������ ��� ���α׷�\n");
		printf("3.���α׷� ����\n");

		printf("��ȣ ����(1~3) : ");
		scanf_s("%d", &choice);
		printf("\n");

		switch (choice) {
			case 1:
				printf("1.������ ��� ���α׷�\n");
				printf("���� ��� �Ǽ� �Է� : ");
				scanf_s("%lf", &num1);

				printf("����(��) �Է� : ");
				scanf_s("%lf", &num2);

				result = pow(num1, num2);
				printf("%lf�� %lf���� ����� : %lf\n\n", num1, num2, result);
				break;

			case 2:
				printf("2.������ ��� ���α׷�\n");
				printf("�������� ���� �Ǽ� �Է� : ");
				scanf_s("%lf", &num1);

				result = sqrt(num1);
				printf("%lf�� ������ ����� : %lf\n\n", num1, result);
				break;

			case 3:
				printf("3.���α׷� ����\n");
				printf("���α׷��� �����մϴ�.\n");
				return 0;
				break;

			default:
				printf("���� ����! ���� 1, 2, 3 �߿��� �����ϼ���.\n");
				continue;
				break;
		}


	} while (1);

	return 0;
}