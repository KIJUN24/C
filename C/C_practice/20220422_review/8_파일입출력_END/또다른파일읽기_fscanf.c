#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 10000

int main(void)
{

	// fprintf, fscanf
	int num[6] = { 0,0,0,0,0,0 }; // 로또 추첨번호
	int bonus = 0;	// 보너스 번호
	char str1[MAX];
	char str2[MAX];

	//// 파일에 쓰기
	//FILE* file = fopen("C:\\Users\\lkjun\\OneDrive\\바탕 화면\\C_Workspace\\C\\C_practice\\20220422_review\\8_파일입출력_END\\test2.txt", "wb");
	//if (file == NULL)
	//{
	//	printf("파일 열기 실패.\n");
	//	return 1;
	//}

	//// 로또 추첨 번호 저장
	//fprintf(file, "%s %d %d %d %d %d %d\n", "추첨번호 ", 1, 2, 3, 4, 5, 6);
	//fprintf(file, "%s %d\n", "보너스번호 ", 7);


	// 파일 읽기
	FILE* file = fopen("C:\\Users\\lkjun\\OneDrive\\바탕 화면\\C_Workspace\\C\\C_practice\\20220422_review\\8_파일입출력_END\\test2.txt", "rb");
	if (file == NULL)
	{
		printf("파일 열기 실패.\n");
		return 1;
	}

	fscanf(file, "%s %d %d %d %d %d %d\n", str1,
		&num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
	printf("%s %d %d %d %d %d %d\n", str1,
		num[0], num[1], num[2], num[3], num[4], num[5]);

	fscanf(file, "%s %d %d %d %d %d %d\n", str2, &bonus);
	printf("%s %d\n", str2, bonus);

	fclose(file);

	return 0;
}