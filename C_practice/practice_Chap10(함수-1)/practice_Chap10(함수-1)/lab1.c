/*
	����-1
	1���� �迭 arr[6] = {0}�� �̿��Ͽ� �Ʒ��� ���� ��µ� �� �ֵ��� srand(), rand()�� ����Ͽ� ���α׷��� �ۼ��Ͻÿ�.
	����� ���������� ������ ���� �ٲ�� �Ѵ�.
	��� ������ 1~10������ ������ �����ϵ��� �Ѵ�.
	
	��°��
	������ ���Ե� ���� ����մϴ�.
	arr[0] = 4
	arr[1] = 9
	arr[2] = 4
	arr[3] = 10
	arr[4] = 9
	arr[5] = 1
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {

	int arr[6] = { 0 };
	int i = 0;
	srand((unsigned)time(NULL));

	// �迭�� ���̸� ���ϴ� �� �ٸ� ���
	printf("%d\n", sizeof(arr)/sizeof(int));

	// 6�� �����ϸ鼭 ������ ����
	for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
		arr[i] = 1 + (rand() % 10);
	}

	printf("������ ���Ե� ���� ����մϴ�.\n");
	
	// 6�� �����ϸ鼭 ������ �����.
	for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	return 0;
}