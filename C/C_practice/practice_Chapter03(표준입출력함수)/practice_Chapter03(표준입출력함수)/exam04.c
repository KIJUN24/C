#include<stdio.h>
#include<stdlib.h>

int main(void) {

	system("title 실수형 데이터의 자리수 지정 형식");

	printf("|%f|", 123.45678);
	printf(" : 실수형 기본 자릿수\n");

	printf("|%2f|", 123.45678);
	printf(" : 소수 둘째 자릿수까지 출력\n");

	printf("|%6.1f|", 123.45678);
	printf(" : 전체 자릿수가 6개이고 소수 첫쨰 자릿수까지 출력\n");

	printf("|%-6.1f|", 123.45678);
	printf(" : 전체 자릿수가 6개이고 소수 첫째 자릿수까지 출력, 왼쪽 정렬\n");

	printf("|%7.3f|", 123.45678);
	printf(" : 전체 자릿수가 7개이고 소수 3번쨰 자릿수까지 출력, 오른쪽 정렬\n");

	printf("|%010.3f|", 123.45678);
	printf(" : 전체 자릿수가 10개이고 소수 3번째 자릿수까지 출력, 오른쪽 정렬, 빈 공간 0으로 채워줌\n");

	return 0;
}