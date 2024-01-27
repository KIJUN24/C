// 수학함수에 대한 실습-1(ceil, floor 함수)
// ceil() : 매개변수로 들어온 double값을 무조건 올림처리
// floor() : 매개변수로 들어온 double값을 무조건 내림처리

#include<stdio.h>
#include<math.h>	// 수학함수를 이요하기 위하여 math.h를 사용.

int main(void) {
	double value = 35.8;
	printf("%lf\n", ceil(value));	// 올림 함수
	printf("%lf\n", floor(value));	// 내림 함수

	return 0;
}