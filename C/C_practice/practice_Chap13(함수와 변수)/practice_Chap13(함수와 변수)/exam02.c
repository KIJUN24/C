/*
	함수와 변수(실습-2)
	함수를 선언 및 구현을 해서 지역변수 사용하기
*/

#include<stdio.h>

int add(int x, int y);

int main(void)
{
	int x = 10, y = 50, sum = 0;

	// 함수호출
	// 함수를 호출하면 스택에 호출된 함수 영역이 할당되기 때문에 똑같은 변수명을 사용해도 무방하다.
	sum = add(x, y);

	printf("합계 : %d\n", sum);

	return 0;
}


// 사용자 정의 함수 구현
// add()의 매개변수 x,y는 지역변수와 동일한 기능을 한다.
// 호출시에 인수값으로 넘어오는 값을 복사되어
// 매개변수들은 초기화가 이루어지는 것이다.
int add(int x, int y)
{

	int temp = 0;	// 지역 변수를 초기화 하지 않으면 오류가 발생한다.
	temp = x + y;

	return temp;
}