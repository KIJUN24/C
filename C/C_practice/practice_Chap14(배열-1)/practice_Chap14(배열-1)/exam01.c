/*
	�迭�� ���� �ǽ�-1
	�迭�� ���� ������ ������ Ÿ���� ���� ���� ó���ϱ� ���� �����̴�.
	�迭�� ���ӵ� �޸�(����) ������ �����Ѵ�.
	�뷮�� �����Ͱ� �����Ѵٸ� ������ ó���ϱ� ���ؼ��� ������ ������ �����ؾ� ������,
	���� ������ Ÿ���� �뷮�� �����Ͷ�� �迭�� �����ϰ�, ȿ��������, ������ ���� ó���� �� �ִ�.
	
	�迭�� �����ϴ� �������
	�迭�� ������ Ÿ��, �迭�̸�, �迭�� ũ��([0�� �ʰ��� ������])
	���� �迭�� ��Ұ� �����ȴ�.

	�迭�� �����Ѵٴ� ���� �����Ϸ����� �뺸�ϴ� ���̴�.
*/

// �⺻�� ������ Ÿ���� �迭�� �����ϴµ� �ʱ�ȭ���� ������ ��� ��µǴ����� ���� �ǽ�

#include<stdio.h>

int main(void)
{
	// �⺻�� ������ Ÿ�Ե��� �迭 ���� �Ѵ�.
	char char_name[10] = { "ABCDEFGHI"};			// 10byte ����(1byte * 10 = 10byte)
	short num_short[10] = { 0 };					// 20byte ����(2byte * 10 = 20byte)
	int num_int[10] = { 0 };						// 40byte ����(4byte * 10 = 40byte)
	long num_long[10] = { 0 };						// 40byte ����(4byte * 10 = 40byte)
	long long num_long_long[10] = { 0 };			// 80byte ����(8byte * 10 = 80byte)
	float real_num_float[10] = { 0.0f };			// 40byte ����(4byte * 10 = 40byte)
	double real_num_double[10] = { 0.0f };			// 80byte ����(8byte * 10 = 40byte)

	int i = 0;

	/*
		1���� �迭�� �ݺ����� ���ؼ� ����� �ϰ��� �Ѵٸ� for�� 1���� �����ϴ� �̱۷����� ������ �ؾ� �Ѵ�.
		�׷��� 2���� �迭�� ���÷����� ������ �ؾ� ���� �ϴ� �˰� ����.

		�迭�� �ε���(÷��)�� 1���� �����ϴ� ���� �ƴϰ�, 0���� �������� �������.

		�迭�� ũ�⸦ N���� �����ߴٸ� �ش� �ε����� 0 ~ (N-1)�̴�.
	*/

	printf("======================================\n");
	for (i = 0; i < sizeof(char_name) / sizeof(char); i++)
	{
		printf("char_name[%d]��(����) : %c\n", i, char_name[i]);
		printf("char_name[%d]��(����) : %d\n\n", i, char_name[i]);
	}
	
	printf("======================================\n");
	for (i = 0; i < sizeof(num_short) / sizeof(short); i++)
	{
		printf("num_short[%d]�� : %d\n\n", i, num_short[i]);
	}

	printf("======================================\n");
	for (i = 0; i < sizeof(num_int) / sizeof(int); i++)
	{
		printf("num_int[%d]�� : %d\n\n", i, num_int[i]);
	}

	printf("======================================\n");
	for (i = 0; i < sizeof(num_long) / sizeof(long); i++)
	{
		printf("num_long[%d]�� : %d\n\n", i, num_long[i]);
	}

	printf("======================================\n");
	for (i = 0; i < sizeof(num_long_long) / sizeof(long long); i++)
	{
		printf("num_long_long[%d]�� : %d\n\n", i, num_long_long[i]);
	}

	printf("======================================\n");
	for (i = 0; i < sizeof(real_num_float) / sizeof(float); i++)
	{
		printf("real_num_float[%d]�� : %f\n\n", i, real_num_float[i]);
	}

	printf("======================================\n");
	for (i = 0; i < sizeof(real_num_double) / sizeof(double); i++)
	{
		printf("real_num_double[%d]�� : %f\n\n", i, real_num_double[i]);
	}

	/*
	���
	��� �迭�� �ʱ�ȭ�� �������� �ƴ��ϸ� ������(������)������ ����Ǿ� ���ٴ� ���� �������
	�׷��Ƿ� �ʱ�ȭ�� �ſ� �߿��ϴ�.
	*/

	return 0;
}