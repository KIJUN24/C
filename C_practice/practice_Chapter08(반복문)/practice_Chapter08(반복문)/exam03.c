// for �� �ǽ� - 3(Ȧ�� �հ� ���ϱ�)

#include<stdio.h>

int main(void) {

	int hap = 0;

	for (int i = 1; i < 101; i += 2) {
		hap += i;
		printf("%d������ ������ : %d\n", i, hap);
	}
	printf("\n\nȦ�� ���� �հ� : %d", hap);

	return 0;
}