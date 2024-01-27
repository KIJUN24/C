/*
	�Լ��� ����(�ǽ�-8)
	register������ CPU���� �ִ� �������� ��������� ����ϴ� ������ ���Ѵ�.
	�������� ������ ����ϴ� �ñ����� ������ ���α׷��� ���� �ӵ��� ������ �����̴�.
	�ƿ﷯, �������� ������ ������������ ����� �� �ְ�,
	�������� ������ ������ �ϱ� ���ؼ��� ������ Ÿ�� �տ� registerŰ���带 �ٿ��ָ� �ȴ�.
	register������ ������ ������ ���� ������(&)�� �� �� ����.
	�޸𸮷��� �ſ� �ҷ��̸� ���� �͵� �ִ�.
*/

// register������ auto������ �ӵ����̿� ���� ����

#include<stdio.h>
#include<time.h>
#define TIME 1000000	// �鸸�� ��ũ�� ��� ����

int main(void)
{
	// clock_t�� clock ticks�� �ڷḦ ��� �ִ� ������ Ÿ������ clock()�� ��ȯ���̴�.
	clock_t start1 = 0, start2 = 0, end1 = 0, end2 = 0;
	double res1 = 0.0, res2 = 0.0;		// �ð� ������ ���� ����

	auto int i = 0, sum = 0;			// �Ϲ� ���� ���� ���� �� �ʱ�ȭ
	register int j = 0, total = 0;		// register ���� ���� ���� �� �ʱ�ȭ

	printf("\nauto �Ϲ� ���� ���\n");
	// clock()�Լ��� time.h�� �����ϴ� �Լ��� ���α׷��� ���� CPU�� �Һ�� �ð��� ��ȯ���ִ� �Լ�
	start1 = clock();	// ���۽ð��� ������.
	for (i = 0; i <= TIME; i++)
	{
		sum += i;
	}
	end1 = clock();
	// CLOCKS_PER_SEC�� �ʴ� clock ticks�� ���� ��Ÿ�� ��ũ��
	res1 = (end1 - (double)start1) / CLOCKS_PER_SEC;	// for�� ����ð� res1�� ������
	printf("auto���� ��� �ҿ�� �ð�(��) : ");
	printf("%.16lf\n", res1);


	printf("\n==========================================\n");


	printf("\nregister �Ϲ� ���� ���\n");
	// clock()�Լ��� time.h�� �����ϴ� �Լ��� ���α׷��� ���� CPU�� �Һ�� �ð��� ��ȯ���ִ� �Լ�
	start2 = clock();	// ���۽ð��� ������.
	for (j = 0; j <= TIME; j++)
	{
		total += j;
	}
	end2 = clock();
	// CLOCKS_PER_SEC�� �ʴ� clock ticks�� ���� ��Ÿ�� ��ũ��
	res2 = (end2 - (double)start2) / CLOCKS_PER_SEC;	// for�� ����ð� res1�� ������
	printf("register���� ��� �ҿ�� �ð�(��) : ");
	printf("%.16lf\n\n\n", res2);


	printf("start1 = %d\n", start1);
	printf("end1 = %d\n", end1);
	printf("start2 = %d\n", start2);
	printf("end2 = %d\n", end2);


	// ��� : ������ ������ Ŭ���� �������� ������ �ణ ������ �ϳ� auto������ ū ���̴� ����.
	// �������� ������ ����� �� �ִ� Ȱ�뵵�� ��ġ�� �Ϲ� ������ ���� �ſ� �۴�.
	// �����ϸ� register������ ������� �ʵ��� ����.
	// �Ϲ� ������ ����ϵ��� ����.

	return 0;
}