/*
	배열에 대한 실습-1
	배열은 같은 종류의 데이터 타입을 많은 양을 처리하기 위한 집합이다.
	배열은 연속된 메모리(스택) 공간을 차지한다.
	대량의 데이터가 존재한다면 변수로 처리하기 위해서는 수많은 변수를 선언해야 하지만,
	같은 데이터 타입의 대량의 데이터라면 배열로 간단하게, 효육적으로, 가독성 좋게 처리할 수 있다.
	
	배열을 선언하는 구성요소
	배열의 데이터 타입, 배열이름, 배열의 크기([0을 초과한 정수값])
	으로 배열의 요소가 구성된다.

	배열을 선언한다는 것은 컴파일러에게 통보하는 것이다.
*/

// 기본형 데이터 타입의 배열을 선언하는데 초기화하지 않으면 어떻게 출력되는지에 대한 실습

#include<stdio.h>

int main(void)
{
	// 기본형 데이터 타입들의 배열 선언만 한다.
	char char_name[10] = { "ABCDEFGHI"};			// 10byte 생성(1byte * 10 = 10byte)
	short num_short[10] = { 0 };					// 20byte 생성(2byte * 10 = 20byte)
	int num_int[10] = { 0 };						// 40byte 생성(4byte * 10 = 40byte)
	long num_long[10] = { 0 };						// 40byte 생성(4byte * 10 = 40byte)
	long long num_long_long[10] = { 0 };			// 80byte 생성(8byte * 10 = 80byte)
	float real_num_float[10] = { 0.0f };			// 40byte 생성(4byte * 10 = 40byte)
	double real_num_double[10] = { 0.0f };			// 80byte 생성(8byte * 10 = 40byte)

	int i = 0;

	/*
		1차원 배열을 반복문을 통해서 출력을 하고자 한다면 for문 1개만 존재하는 싱글루프로 루핑을 해야 한다.
		그런데 2차원 배열은 더플루프로 루핑을 해야 함을 일단 알고 있자.

		배열의 인덱스(첨자)는 1부터 시작하는 것이 아니고, 0부터 시작함을 기억하자.

		배열의 크기를 N개로 설정했다면 해당 인덱스는 0 ~ (N-1)이다.
	*/

	printf("======================================\n");
	for (i = 0; i < sizeof(char_name) / sizeof(char); i++)
	{
		printf("char_name[%d]값(문자) : %c\n", i, char_name[i]);
		printf("char_name[%d]값(숫자) : %d\n\n", i, char_name[i]);
	}
	
	printf("======================================\n");
	for (i = 0; i < sizeof(num_short) / sizeof(short); i++)
	{
		printf("num_short[%d]값 : %d\n\n", i, num_short[i]);
	}

	printf("======================================\n");
	for (i = 0; i < sizeof(num_int) / sizeof(int); i++)
	{
		printf("num_int[%d]값 : %d\n\n", i, num_int[i]);
	}

	printf("======================================\n");
	for (i = 0; i < sizeof(num_long) / sizeof(long); i++)
	{
		printf("num_long[%d]값 : %d\n\n", i, num_long[i]);
	}

	printf("======================================\n");
	for (i = 0; i < sizeof(num_long_long) / sizeof(long long); i++)
	{
		printf("num_long_long[%d]값 : %d\n\n", i, num_long_long[i]);
	}

	printf("======================================\n");
	for (i = 0; i < sizeof(real_num_float) / sizeof(float); i++)
	{
		printf("real_num_float[%d]값 : %f\n\n", i, real_num_float[i]);
	}

	printf("======================================\n");
	for (i = 0; i < sizeof(real_num_double) / sizeof(double); i++)
	{
		printf("real_num_double[%d]값 : %f\n\n", i, real_num_double[i]);
	}

	/*
	결론
	모든 배열은 초기화를 시켜주지 아니하면 쓰레기(가비지)값으로 저장되어 진다는 것을 기억하자
	그러므로 초기화는 매우 중요하다.
	*/

	return 0;
}