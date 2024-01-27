/*
	문제3
	하나의 숫자를 입력받아서 2와 3의 공배수를 구하는 프로그램을 작성하시오.
	int타입의 변수를 하나 선언한다.
	if-else문을 사용하여 2와 3의 공배수에 대한 조건을 만들어서 풀이를 진행한다.
	실행결과
	하나의 정수를 입력하세요 : 24
	24는 2와 3의 배수입니다.
*/

#include<stdio.h>

int main(void) {
	int num = 0;

	printf("하나의 정수를 입력하세요 : ");
	if (scanf_s("%d", &num) == 0)
	{
		printf("오류발생! 숫자만 입력가능합니다.\n");
		// 표준 입력 버퍼에 저장된 모든 문자를 제거한다.
		rewind(stdin);
		return 0;
	}


	if ((num % 2 == 0) && num % 3 == 0) 
	{
		printf("%d는/은 2와 3의 배수입니다.\n", num);
	}
	else
	{
		printf("%d는/은 2와 3의 배수가 아닙니다.\n", num);
	}
	return 0;
}