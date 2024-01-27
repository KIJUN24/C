/*
	함수 프로젝트에 대한 실습
	함수 프로젝트를 하기 위한 순서
	함수 프로젝트 메뉴얼 작성 -> 알고리즘 순서가 포함된 알고리즘 작성
	-> 알고리즘에 맞게끔 순서도를 그림
	-> 함수 간에 관계도를 작성 -> 관계도를 기반으로 소스 코드를 작성
*/

// 실습 정적(static)변수와 전역변수, 지역변수

#include<stdio.h>

int static_num();
int global_num();
int local_num();

// 전역 변수 선언
int global_val = 0;

int main(void)
{
	int result = 0;

	printf("정적(static)변수의 변화를 살펴본다.\n");

	result = static_num();
	printf("1. 정적변수의 num의 값 : %d\n", result);
	result = static_num();
	printf("2. 정적변수의 num의 값 : %d\n", result);
	result = static_num();
	printf("3. 정적변수의 num의 값 : %d\n", result);
	result = static_num();
	printf("4. 정적변수의 num의 값 : %d\n", result);
	result = static_num();
	printf("5. 정적변수의 num의 값 : %d\n", result);

	printf("\n---------------------------------\n");

	printf("전역변수의 변화를 살펴본다.\n");

	result = global_num();
	printf("1. 전역변수 global_val의 값 : %d\n", result);
	result = global_num();					   
	printf("2. 전역변수 global_val의 값 : %d\n", result);
	result = global_num();					   
	printf("3. 전역변수 global_val의 값 : %d\n", result);
	result = global_num();					   
	printf("4. 전역변수 global_val의 값 : %d\n", result);
	result = global_num();					   
	printf("5. 전역변수 global_val의 값 : %d\n", result);


	printf("\n---------------------------------\n");

	printf("지역변수의 변화를 살펴본다.\n");
	result = local_num();
	printf("1. 전역변수 local의 값 : %d\n", result);
	result = local_num();
	printf("2. 전역변수 local의 값 : %d\n", result);
	result = local_num();
	printf("3. 전역변수 local의 값 : %d\n", result);
	result = local_num();
	printf("4. 전역변수 local의 값 : %d\n", result);
	result = local_num();
	printf("5. 전역변수 local의 값 : %d\n", result);

	return 0;
}

int static_num()
{
	// 정적(static)변수는 메모리상에 데이터 영역에 존재하므로
	// 프로그램 실행과 동일하게 라이프사이클을 가진다.
	// 프로그램이 실행이 되는 동안 static변수는 초기화가 이루어지지 아니하고
	// 계속 저장된 값을 유지한다.
	static int num = 0;

	return ++num;
}

int global_num()
{
	// 전역변수도 역시 메모리상에 데이터 영역에 존재함.
	return ++global_val;
}

// 지역변수는 함수를 호출할 때마다 초기화가 이루어짐을 알 수 있다.
int local_num()
{
	// 함수 내의 지역변수(local variable)를 선언 후
	int local = 0;	// 초기화를 반드시 진행해야 한다.
	// 지역변수는 초기화를 하지 아니하면 오류가 생긴다.
	return ++local;
}