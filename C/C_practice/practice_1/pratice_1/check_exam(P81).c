#include <stdio.h>

int main()
{
	char fruit[20];
	int cnt;

	printf("favorite fruit : ");
	scanf("%s", fruit);
	printf("conunt : ");
	scanf("%d", &cnt);
	printf("%s�� %d�� �帳�ϴ�.", fruit, cnt);

	return 0;
}