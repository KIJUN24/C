// for �� �ǽ� - 2(���� �հ� ���ϱ�)

#include<stdio.h.>

int main(void) {

	// 1~100������ ���� �հ� ���ϱ�
	int hap = 0;
	for (int i = 1; i < 101; i++)
	{
		hap += i;
		printf("%d���� ������ ��� : hap = %d\n", i, hap);
	}
	printf("\n\n���� �հ� : %d", hap);

	return 0;
}