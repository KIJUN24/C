/*
	����3 - ����� ���� �Լ��� ���� �������� �ǽ�
	�Լ� ȣ��(3�ܰ�)�� ����, ȣ��, ������ ���Ͽ� ����ڿ��� 2���� ���� �Է¹ް� �ŵ������� ���ϴ� ���α׷��� �ۼ��غ���.
	+ ��� �и��� �غ���.
	����� �Է� �Լ� : int get_integer(void){}
	�ŵ������� ���ϴ� �Լ� : int power(int x, int y){}
	��°��
	������ �Է��ϼ��� : 5
	������ �Է��ϼ��� : 5
	5�� 5���� 3125�Դϴ�.
*/

#include "my_power.h"	// ����� ��� ������ <>������� �ʰ� ""�� ����� ���Խ�Ų��.

int get_integer(void);
int power(int x, int y);

int main(void) {

	int x = 0, y = 0, result = 0;

	printf("�ŵ����� ��� ������ �Է��ϼ��� : ");
	x = get_integer();
	printf("������ �Է��ϼ��� : ");
	y = get_integer();

	//printf("x : %d\n", x);
	//printf("x : %d\n", y);

	result = power(x, y);

	printf("%d�� %d���� %d�Դϴ�.\n", x, y, result);

	return 0;
}

