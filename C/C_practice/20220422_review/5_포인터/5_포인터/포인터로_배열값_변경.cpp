#include <stdio.h>

void change_Array(int* ptr);


int main(void)
{
	// �迭�� �� arr2 -> �ּ�
	int arr2[3] = { 10, 20, 30 };
	//change_Array(arr2);
	change_Array(&arr2[0]);
	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr2[i]);
	}

	// scanf���� &num�� ���� &�� ����ϴ� ����? --> ���� �ִ� ������ ����.

	return 0;
}

void change_Array(int * ptr)
{
	ptr[2] = 50;
}