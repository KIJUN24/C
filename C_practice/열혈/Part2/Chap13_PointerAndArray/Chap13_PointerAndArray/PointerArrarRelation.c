/*
	�����Ϳ� �迭�� ���� ����ϴ�.
	int * ptr	int arr[3]	�̷��� �� ���� �������� ��
	ptr�� ����, arr�� ����� �͸� ���� ��� �����ϴ�.
	ptr, arr ��� int * (������ ������) �̴�.
*/

#include<stdio.h>

int main(void)
{
	int arr[3] = { 0, 0, 0 };
	
	printf("*arr�� �ϱ� ��\n");
	printf("%d %d %d\n\n", arr[0], arr[1], arr[2]);

	(*arr) = 10;
	
	printf("*arr�� �� ��\n");
	printf("%d %d %d\n", arr[0], arr[1], arr[2]);

	return 0;
}