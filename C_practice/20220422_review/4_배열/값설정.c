#include <stdio.h>

int main(void)
{
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}


	//// 배열 크기는 항상 상수로 선언
	//int size = 10;
	//int arr[10];


    // 1,2를 제외한 나머지 0으로 출력
	//int arr[10] = { 1, 2 };
	//for (int i = 0; i < 10; i++)
	//{
	//		printf("%d\n", arr[i]);
	//}


	float arr_f[10] = {1.0f, 2.0f, 3.0f };
	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr_f[i]);
	}

	return 0;
}