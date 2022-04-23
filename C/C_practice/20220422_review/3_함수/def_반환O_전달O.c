#include <stdio.h>

int apple(int total, int ate);

int main(void)
{
	int ret = apple(5, 2); // 5개의 사과 중에서 2개를 먹었어요.
	//printf("사과 5개 중에 2개를 먹으면? %d개가 남아요", ret);
	printf("사과 %d개 중에 %d개를 먹으면? %d개가 남아요",10,4,apple(10,4));


	return 0;
}

int apple(int total, int ate)
{
	return total - ate;
}