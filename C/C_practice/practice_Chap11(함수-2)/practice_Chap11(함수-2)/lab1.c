/*
	�������� �Լ�ȣ��� ����� ����.
	�Լ����� �Ʒ��� ���� �����ϸ� �ȴ�.
	void gugudan_printf(int dan);

	���� ���
	2 * 1 = 2   2 * 2 = 4 ...
	3 * 1 = 3
	...
*/

#include<stdio.h>

void gugudan_print(int dan);

int main(void)
{
	int dan = 0;

	for (dan = 2; dan <= 9; dan++)
	{
		gugudan_print(dan);
	}

	return 0;
}


void gugudan_print(int dan)
{
	int cnt = 0;

	for (cnt = 1; cnt <= 9; cnt++) 
	{
		printf("%d * %d = %d\t", dan, cnt, dan * cnt);
		// �� ���� ����Ǹ� �����ϴ� �ڵ�
		if (cnt == 9)
		{
			printf("\n");
		}
	}
	return;
}
