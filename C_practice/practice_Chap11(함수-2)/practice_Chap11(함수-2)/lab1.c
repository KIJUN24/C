/*
	구구단을 함수호출로 만들어 보자.
	함수명은 아래와 같이 선언하면 된다.
	void gugudan_printf(int dan);

	실행 결과
	2 * 1 = 2   2 * 2 = 4 ...
	3 * 1 = 3
	...
*/

#include<stdio.h>

void gugudan_print(int dan);

int main(void)
{
	int dan = 0;

	for (dan = 2; dan <= 9; dan++)
	{
		gugudan_print(dan);
	}

	return 0;
}


void gugudan_print(int dan)
{
	int cnt = 0;

	for (cnt = 1; cnt <= 9; cnt++) 
	{
		printf("%d * %d = %d\t", dan, cnt, dan * cnt);
		// 한 단이 종료되면 개행하는 코드
		if (cnt == 9)
		{
			printf("\n");
		}
	}
	return;
}
