/*
	�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	�Է� : ù° �߿� A�� B�� �־�����.(0<A, B<10)
	��� : ù° �߿� A+B�� ����Ѵ�.
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
		printf("���ڸ� �ٽ� �Է����ּ���\n");
	}

	
	return 0;
}