/*
	������ �ϱ� �� ����� �����غ��� ������ ���踦 �׷�����
*/

#include<stdio.h>

int main(void)
{
	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;

	printf("num : %d\n", num);

	return 0;
}