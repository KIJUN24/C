#include<stdio.h>

extern int global_num;		// test1.c�� ����� ���������� ����ϰڴ�. ��� �˸��� ��

// ������ �� ������ main()�� �ִ� ���Ͽ��� �ϵ��� �Ѵ�.
// ���� main()�Լ��� ���� ���Ͽ��� ������ �� ������ �ص� ����� ��������
// ��Ģ������ main()�� �ִ� ���Ͽ��� �ϴ� ���� �����̴�.

void out_func(void)
{
	global_num = -111;
	printf("\n[test2.c ���Ͽ� ������ �ܺ� out_func()�Լ� ����\n");

	return;
}