#include <stdio.h>

void Swap(int a, int b);
void Swap_Addr(int* a, int* b);

int main(void)
{
	// Swap

	int a = 10;
	int b = 20;

	printf("a의 주소는 : %d\n", &a);
	printf("b의 주소는 : %d\n", &b);


	printf("Swap 함수 전 => a : %d, b : %d\n", a, b);

	// a와 b의 값을 바꾼다.
	Swap(a, b);
	printf("Swap 함수 후 => a : %d, b : %d\n", a, b);

	// 값에 의한 복사 (Call by value) -> 값만 복사한다는 의미.

	// 주소값을 넘기면? 메모리 공간에 있는 주소값 자체를 넘기면... 철수네 처럼
	printf("(주소값 전달) Swap 함수 전 => a : %d, b : %d\n", a, b);
	Swap_Addr(&a, &b);
	printf("(주소값 전달) Swap 함수 후 => a : %d, b : %d\n", a, b);

	return 0;
}

void Swap(int a, int b)
{
	printf("(Swap 함수 내) a의 주소는 : %d\n", &a);
	printf("(Swap 함수 내) b의 주소는 : %d\n", &b);

	int temp = a;
	a = b;
	b = temp;
	printf("Swap 함수 내 => a : %d, b : %d\n", a, b);
}

void Swap_Addr(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("(주소값 전달) Swap 함수 내 => a : %d, b : %d\n", *a, *b);
}