/*
	�迭�� ���� �ǽ�-6__����ڷκ��� �Է��� �ޱ�
	�迭�� ����� ������ ���ϴ� ���(����)
	1. �迭�� ��� ���� = sizeof(�迭��) / sizeof(�迭��[0])
	2. �迭�� ��� ���� = sizeof(�迭��) / sizeof(�迭�� ������ Ÿ��)
*/

// �迭�� ����� ������ ���ϴ� �ǽ�

#include<stdio.h>
#define LENGTH 10
int main(void)
{

	int arr[LENGTH] = { 0 };
	int cnt = 0;	// �迭�� ������ ������ ����
	int cnt1 = 0;
	int cnt2 = 0;
	int i = 0;


	printf("�迭�� ����� ���� �Է��ϼ���.\n");

	// 10�� �����ϸ鼭 ����ڷκ��� �迭�� ���� �Է¹޴� �ڵ�
	for (i = 0; i < LENGTH; i++)
	{
		printf("arr[%d]���� �� �Է� : ", i);
		scanf_s("%d", &arr[i]);
	}
	printf("\n\n");

	// 1. �迭 ����� ���� ���ϱ�
	cnt = sizeof(arr);
	cnt1 = sizeof(arr) / sizeof(arr[0]);
	printf("arr�迭 ����� ���� : %d\n", cnt1);

	// 1. �迭 ����� ���� ���ϱ�
	cnt2 = sizeof(arr) / sizeof(int);
	printf("arr�迭 ����� ���� : %d\n", cnt2);

	printf("\n\n");

	// �迭�� ��Ҹ� ���� ����غ���
	for (i = 0; i < cnt1; i++)
	{
		printf("arr[%d]�� �� : %2d \n", i, arr[i]);
	}

	return 0;
}