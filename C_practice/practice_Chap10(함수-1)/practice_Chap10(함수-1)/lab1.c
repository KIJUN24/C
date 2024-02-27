/*
	문제-1
	1차원 배열 arr[6] = {0}을 이용하여 아래와 같이 출력될 수 있도록 srand(), rand()를 사용하여 프로그램을 작성하시오.
	실행시 지속적으로 난수의 값이 바뀌도록 한다.
	출력 범위는 1~10사이의 값으로 설정하도록 한다.
	
	출력결과
	난수가 대입된 것을 출력합니다.
	arr[0] = 4
	arr[1] = 9
	arr[2] = 4
	arr[3] = 10
	arr[4] = 9
	arr[5] = 1
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {

	int arr[6] = { 0 };
	int i = 0;
	srand((unsigned)time(NULL));

	// 배열의 길이를 구하는 또 다른 방법
	printf("%d\n", sizeof(arr)/sizeof(int));

	// 6번 루핑하면서 난수를 대입
	for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
		arr[i] = 1 + (rand() % 10);
	}

	printf("난수가 대입된 것을 출력합니다.\n");
	
	// 6번 루핑하면서 난수를 출력함.
	for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	return 0;
}