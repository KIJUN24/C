/*
	컴파일 하기 전 결과를 예상해보고 변수의 관계를 그려보기
*/

#include<stdio.h>

int main(void)
{
	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;

	printf("num : %d\n", num);

	return 0;
}