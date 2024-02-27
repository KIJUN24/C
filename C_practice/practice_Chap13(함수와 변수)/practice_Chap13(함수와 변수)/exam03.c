/*
	함수와 변수(실습-3)
	전역변수에 대한 실습
	- 전역변수(global variable)
	: 함수 외부에서 선언하여 프로그램 소스 파일 전체에서 사용하는 변수.
	  공유변수라고도 한다.
	  프로그램 실행과 동시에 메모리(데이터 영역)에 전역변수의 데이터 타입(자료형)의 바이트 수만큼
	  할당을 하고 아울러 초기화를 하지 않아도 컴파일러가 알아서 초기화를 시켜준다.
*/

// 전역변수는 초기화를 하지 않아도 된다 라는 예제

#include<stdio.h>

// 전역변수 선언만 하고 초기화를 하지 않음.
char character;
short num_short;
int num_integer;
float real_number_float;
double real_number_double;
int* ptr;		// 주소값만 지니는 포인터 전역변수
int arr[5][3];		// 배열명은 주소를 가지고 있는 포인터 상수

int main(void)
{
	// 전역변수의 초깃값을 출력하는 코드

	// character의 초기값(문자)이 출력되지 아니한 이유는
	// 원래 문자열을 표현할 때는 문자열의 끝을 의미하는 문자인 '\0'이 문자열의 끝에 붙어서 문자열의 끝을 알린다.
	// '\0'문자를 가르켜 통상 NULL문자라 하며, 아스키 코드값은 0에 해당한다.
	// 심볼(symbol)형태로 나타내고자 하다 보니 NULL이라 통상 칭한다.
	printf("전역변수 character의 초기값(문자) : %c\n", character);
	printf("전역변수 character의 초기값(아스키코드) : %d\n", character);
	printf("전역변수 num_short의 초기값 : %d\n", num_short);
	printf("전역변수 num_integer의 초기값 : %d\n", num_integer);
	printf("전역변수 real_number_float의 초기값 : %f\n", real_number_float);
	printf("전역변수 real_number_double의 초기값 : %f\n", real_number_double);
	printf("전역변수 int* ptr의 초기값(주소값) : %p\n\n", ptr);
	// int* ptr은 간접참조를 하고 있지 않기 때문에 값이 출력이 되질 아니한다.
	//printf("전역변수 int* ptr의 초기값(간접참조값) : %d\n", *ptr);
	printf("전역변수 arr[5][3]의 초기값(주소값) : %p\n", arr);
	printf("전역변수 arr[5][3]의 바이트값 : %d\n\n", sizeof(arr));

	// 2차원 배열에서는 1차원 배열의 값도 곧 주소값이다.
	printf("전역변수 arr[0]의 바이트값 : %d\n", sizeof(arr[0]));
	printf("전역변수 arr[0]의 초깃값(주소값) : %p\n", arr[0]);
	printf("전역변수 arr[0]의 초깃값(주소값) : %p\n", arr[1]);
	printf("전역변수 arr[0]의 초깃값(주소값) : %p\n", arr[2]);
	printf("전역변수 arr[0]의 초깃값(주소값) : %p\n", arr[3]);
	printf("전역변수 arr[0]의 초깃값(주소값) : %p\n\n", arr[4]);

	// 2차원 배열의 0의 행의 실제값을 출력
	printf("전역변수 arr[0][0]의 초깃값(실제값) : %d\n", arr[0][0]);
	printf("전역변수 arr[0][1]의 초깃값(실제값) : %d\n", arr[0][1]);
	printf("전역변수 arr[0][2]의 초깃값(실제값) : %d\n\n", arr[0][2]);


	// 2차원 배열의 1의 행의 실제값을 출력
	printf("전역변수 arr[1][0]의 초깃값(실제값) : %d\n", arr[1][0]);
	printf("전역변수 arr[1][1]의 초깃값(실제값) : %d\n", arr[1][1]);
	printf("전역변수 arr[1][2]의 초깃값(실제값) : %d\n\n", arr[1][2]);


	// 2차원 배열의 2의 행의 실제값을 출력
	printf("전역변수 arr[2][0]의 초깃값(실제값) : %d\n", arr[2][0]);
	printf("전역변수 arr[2][1]의 초깃값(실제값) : %d\n", arr[2][1]);
	printf("전역변수 arr[2][2]의 초깃값(실제값) : %d\n", arr[2][2]);

	// 2차원 배열의 3의 행의 실제값을 출력
	printf("전역변수 arr[3][0]의 초깃값(실제값) : %d\n", arr[3][0]);
	printf("전역변수 arr[3][1]의 초깃값(실제값) : %d\n", arr[3][1]);
	printf("전역변수 arr[3][2]의 초깃값(실제값) : %d\n\n", arr[3][2]);


	// 2차원 배열의 4의 행의 실제값을 출력
	printf("전역변수 arr[4][0]의 초깃값(실제값) : %d\n", arr[4][0]);
	printf("전역변수 arr[4][1]의 초깃값(실제값) : %d\n", arr[4][1]);
	printf("전역변수 arr[4][2]의 초깃값(실제값) : %d\n", arr[4][2]);

	return 0;
}