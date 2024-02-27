#include <stdio.h>

int main(void)
{
	int arr[3] = { 5, 10, 15 };
	int* ptr = arr;
	for (int i = 0; i < 3; i++) {
		printf("�迭 arr[%d]�� �� : %d\n", i, arr[i]);
	}
	printf("\n");

	for (int i = 0; i < 3; i++) {
		printf("������ ptr[%d]�� �� : %d\n", i, ptr[i]);
	}
	ptr[0] = 100;
	ptr[1] = 200;
	ptr[2] = 300;
	printf("\n\n");
	for (int i = 0; i < 3; i++) {
		//printf("�迭 arr[%d]�� �� : %d\n", i, arr[i]);
		printf("�迭 arr[%d]�� �� : %d\n", i, *(arr + i));
	}
	printf("\n");
	for (int i = 0; i < 3; i++) {
		//printf("������ ptr[%d]�� �� : %d\n", i, ptr[i]);
		printf("�迭 arr[%d]�� �� : %d\n", i, *(ptr + i));
	}
	printf("\n");

	// *(arr + i) == arr[i] ���� ����
	// arr == arr�� �迭 ù ��° ���� �ּҿ� ���� == &arr[0]
	printf("arr��ü�� �ּ� : %d\n", arr);
	printf("arr[0]�� �ּ� : %d\n", &arr[0]);

	printf("arr��ü�� ���� ������ �ּ��� ���� �� : %d\n", *arr); // *(arr + 0)
	printf("arr[0]�� ���� �� : %d\n", *&arr[0]);

	printf("\n");

	// *&�� �ƹ��͵� ���� �Ͱ� ����. &�� �ּ��̸� *�� �� �ּ��� ���̱� ������,
	// *&�� ���� ���ȴ�.
	printf("arr[0]�� ���� ��(*& ���) : %d\n", *&*&*&arr[0]);
	printf("arr[0]�� ���� ��(�ƹ��͵� ����) : %d\n", arr[0]);

	return 0;
}