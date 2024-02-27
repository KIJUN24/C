// 배열의 크기에 대한 예제-2
/*
	배열은 메모리의 공간을 연속된 영역을 지정하면서 할당이 된다.
	배열의 크기는 0을 초과한 정수형 상수값을 허용하는 것을 보았다.
	그러나 현업에서는 #define 매크로 상수 값을 이용하여 배열의 크기를 정하는 경우가 대다수이다.
	그 이유는 배열의 크기의 변동이 있을 때 매크로 상수의 값만 변경시켜주면 프로그램 유지, 보수가 쉬워지기 때문이다.
*/
#include<stdio.h>
#define LENGTH 10			// 매크로 상수 선언

int main(void)
{
	int score[LENGTH] = { 0 };
	int i = 0;
	for (i = 0; i < LENGTH; i++)
	{
		printf("score[%d] : %d\n", i, score[i]);
	}

	return 0;
}