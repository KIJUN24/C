/*
	����3
	������ �迩 ��5���� ���� ������ �迭�� ����� 0���� �ʱ�ȭ�� �Ѵ�.
	�׸���, ����ڷκ��� 5���� �л��� ������ �Է¹ް�
	���� �м��� �ϴµ� 5�� ���� �� 1���� ������ 5���� ���� �׸��� ���հ� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

	��°��
	5���� ������ �Է��ϼ���.
	1��° ���� : 100
	2��° ���� : 75
	3��° ���� : 56
	4��° ���� : 10
	5��° ���� : 48
	=============================
	5���� ���� ���� �迭������ ���
	=============================
	score[0] = 100
	score[1] = 75
	score[2] = 56
	score[3] = 10
	score[4] = 48
	=============================
	���� �м�
	=============================
	1�� ���� : 100��
	5�� ���� : 10��
	�հ� : 289
	��� : 57.80
	=============================
*/

#include<stdio.h>
#define LENGTH 5

int main(void)
{
	int score[LENGTH] = { 0 };
	int max = 0, min = 0, sum = 0;
	double avg = 0.0;
	int i = 0;

	printf("5���� ������ �Է��ϼ���.\n");

	for (i = 0; i < sizeof(score) / sizeof(int); i++)
	{
		printf("%d��° ���� : ", i+1);
		scanf_s("%d", &score[i]);
		sum += score[i];
	}
	
	printf("==============================\n");
	printf("5���� ���� ���� �迭������ ���\n");
	printf("==============================\n");

	for (i = 0; i < sizeof(score) / sizeof(int); i++)
	{
		printf("score[%d] = %d\n", i, score[i]);
	}

	printf("==============================\n");
	printf("���� �м�\n");
	printf("==============================\n");

	/*if (score[0] > score[1] && score[0] > score[2] && score[0] > score[3] && score[0] > score[4])
	{
		printf("1�� ���� : %d", score[0]);
	}
	if (score[1] > score[0] && score[1] > score[2] && score[1] > score[3] && score[0] > score[4])
	{
		printf("1�� ���� : %d", score[1]);
	}
	if (score[2] > score[0] && score[2] > score[1] && score[2] > score[3] && score[2] > score[4])
	{
		printf("1�� ���� : %d", score[2]);
	}
	if (score[3] > score[0] && score[3] > score[1] && score[3] > score[2] && score[3] > score[4])
	{
		printf("1�� ���� : %d", score[3]);
	}
	if (score[4] > score[0] && score[4] > score[1] && score[4] > score[2] && score[4] > score[3])
	{
		printf("1�� ���� : %d", score[4]);
	}
	printf("\n");
	if (score[0] < score[1] && score[0] < score[2] && score[0] < score[3] && score[0] < score[4])
	{
		printf("5�� ���� : %d", score[0]);
	}
	if (score[1] < score[0] && score[1] < score[2] && score[1] < score[3] && score[0] < score[4])
	{
		printf("5�� ���� : %d", score[1]);
	}
	if (score[2] < score[0] && score[2] < score[1] && score[2] < score[3] && score[2] < score[4])
	{
		printf("5�� ���� : %d", score[2]);
	}
	if (score[3] < score[0] && score[3] < score[1] && score[3] < score[2] && score[3] < score[4])
	{
		printf("5�� ���� : %d", score[3]);
	}
	if (score[4] < score[0] && score[4] < score[1] && score[4] < score[2] && score[4] < score[3])
	{
		printf("5�� ���� : %d", score[4]);
	}*/

	// ���� ���� ���ϱ� ���ؼ� �ʱⰪ�� score[0]���� �����Ѵ�.
	max = score[0];
	min = score[0];

	for (i = 0; i < LENGTH; i++)
	{
		// ������ �ִ��� ���ϴ� �ڵ�
		if (max < score[i])
		{
			max = score[i];
		}
		// ������ �ּڰ��� ���ϴ� �ڵ�
		if (min > score[i])
		{
			min = score[i];
		}
	}

	printf("1�� ���� : %d\n", max);
	printf("5�� ���� : %d\n", min);
	printf("�հ� : %d\n", sum);
	
	avg = (double)sum / LENGTH;
	printf("��� : %.2lf", avg);

	return 0;
}