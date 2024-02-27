#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 10000

int main(void)
{
	// 파일 입출력
	// 파일에 어떤 데이터를 저장.
	// 파일에 저장된 데이터를 불러오기

	// fputs, fgets --> 문자열
	char line[MAX]; // char line[10000]
	// 파일에 쓰기_fputs
	//FILE* file = fopen("C:\\Users\\lkjun\\OneDrive\\바탕 화면\\C_Workspace\\C\\C_practice\\20220422_review\\8_파일입출력_END\\test1.txt", "wb"); // r : 읽기, w : 쓰기, a : 이어쓰기
	//if (file == NULL)
	//{
	//	printf("열기 실패\n");
	//	return 1;
	//}

	//fputs("fputs를 이용해서 글을 적어볼게요.\n", file);
	//fputs("잘 적히는지 확인해주세요.\n", file);


	// 파일 읽기_fgets
	FILE* file = fopen("C:\\Users\\lkjun\\OneDrive\\바탕 화면\\C_Workspace\\C\\C_practice\\20220422_review\\8_파일입출력_END\\test1.txt", "rb"); // r : 읽기, w : 쓰기, a : 이어쓰기
	if (file == NULL)
	{
		printf("열기 실패\n");
		return 1;
	}
	while (fgets(line, MAX, file) != NULL)
	{
		printf("%s", line);
	}


	// 파일을 열고 나서 닫지 않은 상태에서 어떤 프로그램에 문제가 생기면?
	// 데이터 손실 발생 가능. 그래서 항상 파일은 닫아주는 습관을 들일 것.
	fclose(file);



	// fprintf, fscanf

	return 0;
}