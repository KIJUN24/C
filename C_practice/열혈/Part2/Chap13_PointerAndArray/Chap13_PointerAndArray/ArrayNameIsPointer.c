#include<stdio.h>

int main(void)
{
	int arr[3] = { 15, 25, 35 };
	int* ptr = &arr[0];

	printf("ptr : %d\t arr : %d\n", ptr[0], arr[0]);
	printf("ptr : %d\t arr : %d\n", ptr[1], arr[1]);
	printf("ptr : %d\t arr : %d\n", ptr[2], arr[2]);

	return 0;
}