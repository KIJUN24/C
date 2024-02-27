#include <stdio.h>

void change_Array(int* ptr);


int main(void)
{
	// 배열일 때 arr2 -> 주소
	int arr2[3] = { 10, 20, 30 };
	//change_Array(arr2);
	change_Array(&arr2[0]);
	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr2[i]);
	}

	// scanf에서 &num과 같은 &를 사용하는 이유? --> 위에 있는 이유와 동일.

	return 0;
}

void change_Array(int * ptr)
{
	ptr[2] = 50;
}