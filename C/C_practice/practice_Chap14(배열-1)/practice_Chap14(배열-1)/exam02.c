/*
	배열에 대한 실습-2
	배열이름(배열명)은 곧 주소다.(포인터 상수)
	배열이름을 이용하여 주소를 출력해보자
*/

#include<stdio.h>

int main(void)
{
	// 기본형 데이터 타입들의 배열 선언만 한다.
	char char_name[10] = { "ABCDEFGHI" };
	short num_short[10] = { 0 };		
	int num_int[10] = { 0 };		
	//int num_int2[10] = { 0 };
	long num_long[10] = { 0 };			
	long long num_long_long[10] = { 0 };
	float real_num_float[10] = { 0.0f };
	double real_num_double[10] = { 0.0f };

	int i = 0;

	//num_int2 = num_int;	
	// 배열명은 (포인터)상수이기 때문에 오류가 발생한다. 
	// 상수는 변하지 않는 수이기에 오류가 발생한다.

	int* int_ptr = NULL;	// 4바이트가 생성, 포인터 변수다.
	int_ptr = num_int;		// 포인터 변수이기 때문에 배열의 주소를 저장할 수 있다.


	// char_name[i]은 곧 변수와 동일하다. 포인터 변수에서도 *int_ptr도 변수와 동일하다.
	printf("======================================\n");
	printf("char타입은 1바이트씩 증가한다.\n");
	printf("char_name : %p\n", char_name);
	printf("char_name[0] : %p\n", char_name[0]);


	printf("char_name(문자열 값) : %s\n", char_name);
	// char_name배열의 문자열 값을 출력하는 코드이다.

	// char_name 배열명은 곧 주소를 나타내는데 배열의 0번째 인덱스의 주소와 항상 일치한다.
	for (i = 0; i < sizeof(char_name) / sizeof(char); i++)
	{
		printf("char_name[%d]값(주소) : %p\n", i, &char_name[i]);
	}

	printf("======================================\n");
	printf("short타입은 2바이트씩 증가한다.\n");
	for (i = 0; i < sizeof(num_short) / sizeof(short); i++)
	{
		printf("num_short[%d]값(주소) : %p\n\n", i, &num_short[i]);
	}

	printf("======================================\n");
	printf("int타입은 4바이트씩 증가한다.\n");
	for (i = 0; i < sizeof(num_int) / sizeof(int); i++)
	{
		printf("num_int[%d]값(주소) : %p\n\n", i, &num_int[i]);
	}

	printf("======================================\n");
	printf("long타입은 4바이트씩 증가한다.\n");
	for (i = 0; i < sizeof(num_long) / sizeof(long); i++)
	{
		printf("num_long[%d]값(주소) : %p\n\n", i, &num_long[i]);
	}

	printf("======================================\n");
	printf("long long타입은 8바이트씩 증가한다.\n");
	for (i = 0; i < sizeof(num_long_long) / sizeof(long long); i++)
	{
		printf("num_long_long[%d]값(주소) : %p\n\n", i, &num_long_long[i]);
	}

	printf("======================================\n");
	printf("float타입은 4바이트씩 증가한다.\n");
	for (i = 0; i < sizeof(real_num_float) / sizeof(float); i++)
	{
		printf("real_num_float[%d]값(주소) : %p\n\n", i, &real_num_float[i]);
	}

	printf("======================================\n");
	printf("double타입은 8바이트씩 증가한다.\n");
	for (i = 0; i < sizeof(real_num_double) / sizeof(double); i++)
	{
		printf("real_num_double[%d]값(주소) : %p\n\n", i, &real_num_double[i]);
	}


	// 포인터 변수로 배열의 주소를 저장한 후 포인터 변수를 이용하여 출력하는 방법
	printf("======================================\n");
	printf("int* 타입은 4바이트씩 증가한다.\n");
	printf("포인터 int_ptr의 바이트 수 : %d\n", sizeof(*int_ptr));
	for (i = 0; i < 10; i++)
	{
		printf("int_ptr[%d]값 : %d\n\n", i, int_ptr[i]);  

		// int_ptr 포인터 변수 자체가 주소를 저장하기 때문에 &를 붙일 필요가 없다.
		printf("int_ptr[%d]값(주소) : %p\n\n", i, int_ptr[i]);
		int_ptr++;	// 포인터 위치 증가
					// (4바이트씩 증가? 왜? 이유는 데이터 타입이 int* 타입)
	}

	return 0;
}