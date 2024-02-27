/*
	�Լ��� ����(�ǽ�-6)
	��������(automatic variable)�� ��������(static variable)�� ���� �ǽ�
	- ��������(��������, auto����, �ڵ�����)
	: ���������� ����������� �ϴ� ������ ���������� ������ ��ġ����
	  �Լ��� ����Ǹ� �ڵ����� �Ҹ��ϱ� �����̴�.
	  ��������, auto����, �ڵ�������� �Ѵ�.
	  ���������� �����Ϸ��� autoŰ���带 ���̸� �ȴ�.
	  ���ݱ��� ���������� ����ϸ鼭 �� �� ���ʵ� auto�� ������ �ʾҴ�.
	  �׷��� �ڵ����� �Ҹ��� �̷������.
	  �� ������ �����Ϸ��� ���������� �����ϸ� �⺻������ ���������� ��������ֱ� �����̴�.
*/

#include<stdio.h>

void func(int hap, int cnt);

int main(void)
{
	auto int hap = 0;	// �������� ���� �� �ʱ�ȭ
	int cnt = 10;		// �������� ���� �� �ʱ�ȭ

	printf("[main()�Լ� ����]\n");
	func(hap, cnt);
	printf("[main()�Լ� ����]\n");
	printf("auto int hap�� �� : %d\n", hap);
	printf("int cnt�� �� : %d\n\n", cnt);

	return 0;
}

void func(int hap, int cnt)	
// �Ű������� �Ѿ�� �� ���� ���������� �Լ� ����� �Բ� �Ҹ�ȴٴ� ���� �� �� �ִ�.
{
	printf("[func()�Լ� ����]\n");
	printf("auto int hap�� �� : %d\n", hap);
	printf("int cnt�� �� : %d\n", cnt);
	hap++;
	cnt++;
	return;
}