// 배열의 크기에 대한 예제-4

#include<stdio.h>
#define LENGTH 3
int main(void)
{
	int score[LENGTH] = { 10, 20,30 };

	
	//int score_over[LENGTH] = { 10,20,30,40 };
	// 다음과 같은 코드는 배열의 크기가 3
	// 인덱스 3인 방은 존재하지 않는데 40을 대입시키므로
	// 런타임 에러(indexOutOfBounds Error)가 발생하는 것이다.


	int score_min[LENGTH];
	score_min[2] = 67;
	printf("score_min[0] : %d\n", score_min[0]);
	printf("score_min[1] : %d\n", score_min[1]);
	printf("score_min[2] : %d\n", score_min[2]);
	// 특정 인덱스만 초기화를 하게 되면, 나머지 방의 값들은 역시 쓰레기 값으로 채워진 것을 알 수 있다.



	printf("\n====================\n");
	int score_zero[LENGTH] = { 66 };
	printf("score_min[0] : %d\n", score_zero[0]);
	printf("score_min[1] : %d\n", score_zero[1]);
	printf("score_min[2] : %d\n", score_zero[2]);
	// 단, 초기화를 할 때 값을 크기보다 적게 넣으면 나머지 값은 0으로 나온다.



	/*
		배열을 사용할 때 주의사항
		1. 배열의 인덱스(첨자) 항상 0부터 시작
		2. 배열명은 곧 주소다.(배열[0]의 주소와 동일)
		3. 배열의 선언과 함께 초기화 할 경우 배열의 크기는 생략이 가능하다.(권고사항은 아님)
		4. 배열의 크기보다 큰 인덱스에 값을 저장 및 출력을 하면 에러발생(방이 없다)
		5. 배열의 크기보다 특정 인덱스만 값을 초기화하면 나머지 방의 값은 쓰레기 값으로 채워진다.
		   메모리적인 측면에서 낭비가 된다.
	*/ 
	

	return 0;
}