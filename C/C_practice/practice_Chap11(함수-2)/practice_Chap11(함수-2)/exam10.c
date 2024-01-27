/*
	��ȯ(���)�Լ�(recursive function, recursive call) �ǽ�-2
	����ڷκ��� �ϳ��� ������ �Է� �޾Ƽ� ����Լ��� Ȱ���Ͽ� �����հ踦 ���ϴ� �ǽ�����
*/

#include<stdio.h>

int sum(int cnt);

int main(void)
{
	int input = 0, result = 0;

re_input:	
	input = 0;
	printf("������ �����հ踦 ���ұ��? ");
	scanf_s("%d", &input);
	getchar();

	if (input < 0)	// ������ ������ �� ������ ó���ϴ� �κ�
	{
		printf("����� �Է��� �� �ֽ��ϴ�.\n");
		printf("���α׷��� �ٽ� �������ּ���.\n");
		goto re_input;
	}
	else if (input > 32767)	// signed int : -32,768 ~ 32,767 �̹Ƿ� ��ȣ������ ����� �� ���� ó��
	{
		printf("int �ڷ����� ��ȿ������ ������ϴ�.\n");
		goto re_input;
	}
	else if (input > 0 && input < 32767)	// �������� ���� ������ ��.
	{
		result = sum(input);
		printf("1���� %d������ �� : %d\n", input, result);
	}
	else
	{
		printf("int�� Ÿ���� 32767���� �Է°����մϴ�.\n");
		goto re_input;
	}

	return 0;
}

// ����� ���� �Լ�
int sum(int cnt)
{

	if (cnt == 1)	// ���ѷ��� Ż�� ����
	{
		return 1;
	}
	else
	{
		return	cnt + sum(cnt - 1);		// �Լ� ȣ�� �� return
	}
}