#include<stdio.h>
#include<stdlib.h>		// rand(), srand()함수 사용하기 위함.
#include<time.h>

// 함수 선언과 전역변수 선언과 초기화
int sonato2000();
int sonato2400();
int bodynum();
char color[5][10] = { "흰색", "검은색", "파란색", "은색", "빨간색" };


int sonato2000()
{
	int engine = 2000;	// CC 값

	// socato 엔진의 고유 번호가 되어야 하므로 값이 초기화가 되지 않는 정적 변수로 선언함.
	static int num = 10000;

	printf("\n2000CC conata 2000CC engine 고유 번호 : %d\n", ++num);

	// 차대번호 발급 함수를 호출
	printf("sonata 전체 차대 번호 : %d\n", bodynum());
	printf("engine : %dCC 파워 엔진, ", engine);
	//srand((unsigned) time(NULL));	// 종자값(seed)변경 : 시간을 기준으로 한다.
	printf("color : %s\n", color[rand() % 5]);
	// 맨 처음 호출될 때, rand()를 사용했기에 랜덤하게 생상이 출력된다.

	return 0;
}

int sonato2400()
{
	int engine = 2400;	// CC 값

	// socato 엔진의 고유 번호가 되어야 하므로 값이 초기화가 되지 않는 정적 변수로 선언함.
	static int num = 20000;

	printf("\n2400CC conata 2000CC engine 고유 번호 : %d\n", ++num);

	// 차대번호 발급 함수를 호출
	printf("sonata 전체 차대 번호 : %d\n", bodynum());
	printf("engine : %dCC 하이브리드 엔진, ", engine);
	//srand((unsigned)time(NULL));
	printf("color : %s\n", color[rand() % 5]);
	// 맨 처음 호출될 때, rand()를 사용했기에 랜덤하게 생상이 출력된다.

	return 0;
}

// 고유한 값인 차대번호를 반환해주는 함수
int bodynum()
{
	static int bodyNumber = 100000;
	return ++bodyNumber;
}