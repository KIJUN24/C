#include <stdio.h>

int main(void)
{
	// 다차원 배열 Multidimensional Array
	//int i;
	//// □

	//int array[5]; // 5개짜리가 하나
	//// □□□□□
	//// [0][1][2][3][4]

	//int arr2[2][5]; // 5개짜리가 2개
	//// □□□□□
	//// □□□□□
	//// [0,0][0,1][0,2][0,3][0,4]
	//// [1,0][1,1][1,2][1,3][1,4]

	//int arr3[4][2];
	//// □□
	//// □□
	//// □□
	//// □□
	//// [0,0][0,1]
	//// [1,0][1,1]
	//// [2,0][2,1]
	//// [3,0][3,1]

	//int arr4[3][3][3];
	//// □□□
	//// □□□
	//// □□□

	//// □□□
	//// □□□
	//// □□□

	//// □□□
	//// □□□
	//// □□□


	//// [0,0,0][0,0,1][0,0,2]
	//// [0,1,0][0,1,1][0,1,2]
	//// [0,2,0][0,2,1][0,2,2]

	//// [1,0,0][1,0,1][1,0,2]
	//// [1,1,0][1,1,1][1,1,2]
	//// [1,2,0][1,2,1][1,2,2]

	//// [2,0,0][2,0,1][2,0,2]
	//// [2,1,0][2,1,1][2,1,2]
	//// [2,2,0][2,2,1][2,2,2]

	//int arr_2[5] = { 1,2,3,4,5 };
	//int arr2_2[2][5] = {
	//	{ 1,2,3,4,5 },
	//	{1,2,3,4,5}
	//};
	//int arr3_2[4][2] = {
	//	{1,2},
	//	{1,2},
	//	{1,2},
	//	{1,2}
	//};
	//int arr4_2[3][3][3] = {
	//	{
	//		{1,2,3},{1,2,3},{1,2,3}
	//	},
	//	{
	//		{1,2,3},{1,2,3},{1,2,3}
	//	},
	//	{
	//		{1,2,3},{1,2,3},{1,2,3}
	//	}
	//};

	int arr3[4][2] = {
		{1,2},
		{3,4},
		{5,6},
		{7,8}
	};
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("2차원 배열 (%d, %d)의 값은 : %d\n", i, j, arr3[i][j]);
		}
		printf("\n");
	}

	int arr4_2[3][3][3] = {
		{
			{1,2,3},
			{1,2,3},
			{1,2,3}
		},
		{
			{1,2,3},
			{1,2,3},
			{1,2,3}
		},
		{
			{1,2,3},
			{1,2,3},
			{1,2,3}
		}
	};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3;k++)
			{
				printf("3차원 배열 (%d, %d, %d)의 값은 : %d\n", i, j, k, arr4_2[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}