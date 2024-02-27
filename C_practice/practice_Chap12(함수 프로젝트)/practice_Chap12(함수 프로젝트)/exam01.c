/*
	�Լ� ������Ʈ�� ���� �ǽ�
	�Լ� ������Ʈ�� �ϱ� ���� ����
	�Լ� ������Ʈ �޴��� �ۼ� -> �˰��� ������ ���Ե� �˰��� �ۼ�
	-> �˰��� �°Բ� �������� �׸�
	-> �Լ� ���� ���赵�� �ۼ� -> ���赵�� ������� �ҽ� �ڵ带 �ۼ�
*/

// �ǽ� ����(static)������ ��������, ��������

#include<stdio.h>

int static_num();
int global_num();
int local_num();

// ���� ���� ����
int global_val = 0;

int main(void)
{
	int result = 0;

	printf("����(static)������ ��ȭ�� ���캻��.\n");

	result = static_num();
	printf("1. ���������� num�� �� : %d\n", result);
	result = static_num();
	printf("2. ���������� num�� �� : %d\n", result);
	result = static_num();
	printf("3. ���������� num�� �� : %d\n", result);
	result = static_num();
	printf("4. ���������� num�� �� : %d\n", result);
	result = static_num();
	printf("5. ���������� num�� �� : %d\n", result);

	printf("\n---------------------------------\n");

	printf("���������� ��ȭ�� ���캻��.\n");

	result = global_num();
	printf("1. �������� global_val�� �� : %d\n", result);
	result = global_num();					   
	printf("2. �������� global_val�� �� : %d\n", result);
	result = global_num();					   
	printf("3. �������� global_val�� �� : %d\n", result);
	result = global_num();					   
	printf("4. �������� global_val�� �� : %d\n", result);
	result = global_num();					   
	printf("5. �������� global_val�� �� : %d\n", result);


	printf("\n---------------------------------\n");

	printf("���������� ��ȭ�� ���캻��.\n");
	result = local_num();
	printf("1. �������� local�� �� : %d\n", result);
	result = local_num();
	printf("2. �������� local�� �� : %d\n", result);
	result = local_num();
	printf("3. �������� local�� �� : %d\n", result);
	result = local_num();
	printf("4. �������� local�� �� : %d\n", result);
	result = local_num();
	printf("5. �������� local�� �� : %d\n", result);

	return 0;
}

int static_num()
{
	// ����(static)������ �޸𸮻� ������ ������ �����ϹǷ�
	// ���α׷� ����� �����ϰ� ����������Ŭ�� ������.
	// ���α׷��� ������ �Ǵ� ���� static������ �ʱ�ȭ�� �̷������ �ƴ��ϰ�
	// ��� ����� ���� �����Ѵ�.
	static int num = 0;

	return ++num;
}

int global_num()
{
	// ���������� ���� �޸𸮻� ������ ������ ������.
	return ++global_val;
}

// ���������� �Լ��� ȣ���� ������ �ʱ�ȭ�� �̷������ �� �� �ִ�.
int local_num()
{
	// �Լ� ���� ��������(local variable)�� ���� ��
	int local = 0;	// �ʱ�ȭ�� �ݵ�� �����ؾ� �Ѵ�.
	// ���������� �ʱ�ȭ�� ���� �ƴ��ϸ� ������ �����.
	return ++local;
}