/*
	두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
	입력 : 첫째 중에 A와 B가 주어진다.(0<A, B<10)
	출력 : 첫째 중에 A+B를 출력한다.
*/

#include<stdio.h>

int main(void)
{
	int a = 0, b = 0, hap = 0;
	scanf_s("%d %d", &a, &b);
	if (0 < a && b < 10)
	{
		hap = a + b;
		printf("%d", hap);
	}
	else
	{
		printf("숫자를 다시 입력해주세요\n");
	}

	
	return 0;
}