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