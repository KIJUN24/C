/*
	�迭�� ���� �ǽ�-2
	�迭�̸�(�迭��)�� �� �ּҴ�.(������ ���)
	�迭�̸��� �̿��Ͽ� �ּҸ� ����غ���
*/

#include<stdio.h>

int main(void)
{
	// �⺻�� ������ Ÿ�Ե��� �迭 ���� �Ѵ�.
	char char_name[10] = { "ABCDEFGHI" };
	short num_short[10] = { 0 };		
	int num_int[10] = { 0 };		
	//int num_int2[10] = { 0 };
	long num_long[10] = { 0 };			
	long long num_long_long[10] = { 0 };
	float real_num_float[10] = { 0.0f };
	double real_num_double[10] = { 0.0f };

	int i = 0;

	//num_int2 = num_int;	
	// �迭���� (������)����̱� ������ ������ �߻��Ѵ�. 
	// ����� ������ �ʴ� ���̱⿡ ������ �߻��Ѵ�.

	int* int_ptr = NULL;	// 4����Ʈ�� ����, ������ ������.
	int_ptr = num_int;		// ������ �����̱� ������ �迭�� �ּҸ� ������ �� �ִ�.


	// char_name[i]�� �� ������ �����ϴ�. ������ ���������� *int_ptr�� ������ �����ϴ�.
	printf("======================================\n");
	printf("charŸ���� 1����Ʈ�� �����Ѵ�.\n");
	printf("char_name : %p\n", char_name);
	printf("char_name[0] : %p\n", char_name[0]);


	printf("char_name(���ڿ� ��) : %s\n", char_name);
	// char_name�迭�� ���ڿ� ���� ����ϴ� �ڵ��̴�.

	// char_name �迭���� �� �ּҸ� ��Ÿ���µ� �迭�� 0��° �ε����� �ּҿ� �׻� ��ġ�Ѵ�.
	for (i = 0; i < sizeof(char_name) / sizeof(char); i++)
	{
		printf("char_name[%d]��(�ּ�) : %p\n", i, &char_name[i]);
	}

	printf("======================================\n");
	printf("shortŸ���� 2����Ʈ�� �����Ѵ�.\n");
	for (i = 0; i < sizeof(num_short) / sizeof(short); i++)
	{
		printf("num_short[%d]��(�ּ�) : %p\n\n", i, &num_short[i]);
	}

	printf("======================================\n");
	printf("intŸ���� 4����Ʈ�� �����Ѵ�.\n");
	for (i = 0; i < sizeof(num_int) / sizeof(int); i++)
	{
		printf("num_int[%d]��(�ּ�) : %p\n\n", i, &num_int[i]);
	}

	printf("======================================\n");
	printf("longŸ���� 4����Ʈ�� �����Ѵ�.\n");
	for (i = 0; i < sizeof(num_long) / sizeof(long); i++)
	{
		printf("num_long[%d]��(�ּ�) : %p\n\n", i, &num_long[i]);
	}

	printf("======================================\n");
	printf("long longŸ���� 8����Ʈ�� �����Ѵ�.\n");
	for (i = 0; i < sizeof(num_long_long) / sizeof(long long); i++)
	{
		printf("num_long_long[%d]��(�ּ�) : %p\n\n", i, &num_long_long[i]);
	}

	printf("======================================\n");
	printf("floatŸ���� 4����Ʈ�� �����Ѵ�.\n");
	for (i = 0; i < sizeof(real_num_float) / sizeof(float); i++)
	{
		printf("real_num_float[%d]��(�ּ�) : %p\n\n", i, &real_num_float[i]);
	}

	printf("======================================\n");
	printf("doubleŸ���� 8����Ʈ�� �����Ѵ�.\n");
	for (i = 0; i < sizeof(real_num_double) / sizeof(double); i++)
	{
		printf("real_num_double[%d]��(�ּ�) : %p\n\n", i, &real_num_double[i]);
	}


	// ������ ������ �迭�� �ּҸ� ������ �� ������ ������ �̿��Ͽ� ����ϴ� ���
	printf("======================================\n");
	printf("int* Ÿ���� 4����Ʈ�� �����Ѵ�.\n");
	printf("������ int_ptr�� ����Ʈ �� : %d\n", sizeof(*int_ptr));
	for (i = 0; i < 10; i++)
	{
		printf("int_ptr[%d]�� : %d\n\n", i, int_ptr[i]);  

		// int_ptr ������ ���� ��ü�� �ּҸ� �����ϱ� ������ &�� ���� �ʿ䰡 ����.
		printf("int_ptr[%d]��(�ּ�) : %p\n\n", i, int_ptr[i]);
		int_ptr++;	// ������ ��ġ ����
					// (4����Ʈ�� ����? ��? ������ ������ Ÿ���� int* Ÿ��)
	}

	return 0;
}