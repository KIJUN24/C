/*
	�迭�� ���� �ǽ�-4
	�迭�� �ݺ��� �߿��� for���ϰ� ���� ������ �� �´´�.
*/

// �迭�� ����Ͽ� 3���� ������ ������ ����ڷκ��� �Է¹��� �� ������ ����� ���ϴ� ���α׷�

#include<stdio.h>
#define LENGTH 3

int main(void)
{
	int score[LENGTH] = { 0 };		// ������ �迭 ���� �� �ʱ�ȭ
	int count = 0, sum = 0;
	double avg = 0.0;

	// ����ڷκ��� 3���� ���� ������ �ݺ��ؼ� �Է� �޴� �ڵ�
	for (count = 0; count < LENGTH; count++)
	{
		printf("����%d ���� : ", count + 1);
		scanf_s("%d", &score[count]);		
		// score[count]�� ������ �����ϱ� ������ �ּ����� ������ &�� ����� ���̴�.
		// score�� �迭���̱� ������ �ּҸ� ������ �ִ�.
	}

	// �Է¹��� 3���� ������ ������ ���ϴ� �ڵ�
	for (count = 0; count < LENGTH; count++)
	{
		sum += score[count];
	}

	// ����� ���ϴ� �ڵ�
	avg = (double)sum / LENGTH;

	// ������ ����� ����ϴ� �ڵ�
	printf("\n");
	printf("���� : %d\n", sum);
	printf("��� : %f\n", avg);

	return 0;
}