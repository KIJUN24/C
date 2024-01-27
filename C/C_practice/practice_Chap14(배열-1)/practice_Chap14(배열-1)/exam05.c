/*
	배열에 대한 실습-5
	배열의 요소들의 값을 랜덤하게 출력하는 예제
*/

#include<stdio.h>
#include<stdlib.h>		// rand()를 사용하기 위해 포함
#include<time.h>		// time()를 사용하기 위해 포함
#define LENGTH 10		// 매크로 상수 선언 및 초기화

int main(void)
{
	int rand_num[LENGTH] = { 0 };		// 배열의 선언과 동시에 초기화
	int count = 0;

	// 배열의 초기값
	printf("배열의 초기값 출력\n");
	for (count = 0; count < LENGTH; count++)
	{
		printf("rand_num[%d] = %d\n", count, rand_num[count]);
	}

	printf("\n\n");

	srand((unsigned)time(NULL));		// 시간 차별화를 시켜줌으로 같은 난수가 발생되지 않도록 함
	printf("1 ~ 500 사이의 숫자를 랜덤 출력\n");

	// 1 ~ 500까지 랜덤 숫자 발생시킨 후에 rand_num 배열에 저장하는 코드
	for (count = 0; count < LENGTH; count++)
	{
		rand_num[count] = 1 + (rand() % 500);		// 1 ~ 500까지 범위를 조정함
		//rand_num[count] = 1 + (rand());			// rand()만 단독으로 호출하면 0~32767 사이의 랜덤값을 발생시킴
		}


	// rand_num배열에 저장되어진 랜덤한 숫자들의 값을 출력하는 코드
	for (count = 0; count < LENGTH; count++)
	{
		printf("rand_num[%d] = %d\n", count, rand_num[count]);
	}

	return 0;
}