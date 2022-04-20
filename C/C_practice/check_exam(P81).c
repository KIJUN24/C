/*
실행결과
좋아하는 과일 : 망고 (enter)
몇 개 : 3 (enter)
망고를 3개 드립니다.
*/

#include <stdio.h>

int main()
{
	char fruit[20];
	int cnt;

	printf("favorite fruit : ");
	scanf("%s", fruit);
	printf("conunt : ");
	scanf("%d", &cnt);
	printf("%s를 %d개 드립니다.", fruit, cnt);

	return 0;
}