/*
	배열과 문자열에 대한 실습-1
	문자 : ' '(홀따옴표, 작은 따옴표, single contation)로 감싸진 하나의 문자를 의미한다.
	문자열 : " "(쌍따옴표, 큰 따옴표, double contation)로 감싸진 하나의 문자 및 여러 개의 문자들의 집합을 의미한다.
	
	배열로 문자열을 저장하고 싶다면, 항상 기억해야 할 것은
	문자열의 개수와 +1방을 만들어야 한다.
	문자열은 C언어에서 다룰 수 있는 데이터 타입이 자료형이 따로 존재하지 않아서, 문자열을 이용하기 위해서는 배열과 포인터를 활용해야 한다.
*/

// char 배열의 NULL문자를 저장한 것과 저장하지 않은 배열을 출력하면 어떻게 되는지에 대한 실습

#include<stdio.h>

int main(void)
{

	int i = 0;
	char arr1[10] = "C_Program";	// NULL 문자가 포함이 될 공간을 확보한 배열
	char arr2[9] = "C_Program";		// NULL 문자가 포함이 될 공간을 확보하지 않은 배열

	printf("배열 크기 %d : %s\n", sizeof(arr1) / sizeof(char), arr1);
	printf("배열 크기 %d : %s\n", sizeof(arr2) / sizeof(char), arr2);
	// arr2는 NULL문자를 포함을 하지 않았기 떄문에 엉뚱한 결과를 출력한다.
	// 이러한 이유로 반드시 문자열의 끝을 알리는 NULL문자가 들어갈 메모리 공간을 확보해야 한다.

	printf("\n=======반복문으로 값을 하나씩 출력=======\n");
	printf("=======arr1[10]의 배열값=======\n");
	for (i = 0; i < 10; i++)
	{
		printf("arr1[%d] : %c\n", i, arr1[i]);
	}

	printf("=======arr2[10]의 배열값=======\n");
	for (i = 0; i < 9; i++)
	{
		printf("arr2[%d] : %c\n", i, arr2[i]);
	}

	return 0;
}