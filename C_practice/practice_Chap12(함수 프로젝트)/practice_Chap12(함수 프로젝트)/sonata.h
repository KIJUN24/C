#include<stdio.h>
#include<stdlib.h>		// rand(), srand()�Լ� ����ϱ� ����.
#include<time.h>

// �Լ� ����� �������� ����� �ʱ�ȭ
int sonato2000();
int sonato2400();
int bodynum();
char color[5][10] = { "���", "������", "�Ķ���", "����", "������" };


int sonato2000()
{
	int engine = 2000;	// CC ��

	// socato ������ ���� ��ȣ�� �Ǿ�� �ϹǷ� ���� �ʱ�ȭ�� ���� �ʴ� ���� ������ ������.
	static int num = 10000;

	printf("\n2000CC conata 2000CC engine ���� ��ȣ : %d\n", ++num);

	// �����ȣ �߱� �Լ��� ȣ��
	printf("sonata ��ü ���� ��ȣ : %d\n", bodynum());
	printf("engine : %dCC �Ŀ� ����, ", engine);
	//srand((unsigned) time(NULL));	// ���ڰ�(seed)���� : �ð��� �������� �Ѵ�.
	printf("color : %s\n", color[rand() % 5]);
	// �� ó�� ȣ��� ��, rand()�� ����߱⿡ �����ϰ� ������ ��µȴ�.

	return 0;
}

int sonato2400()
{
	int engine = 2400;	// CC ��

	// socato ������ ���� ��ȣ�� �Ǿ�� �ϹǷ� ���� �ʱ�ȭ�� ���� �ʴ� ���� ������ ������.
	static int num = 20000;

	printf("\n2400CC conata 2000CC engine ���� ��ȣ : %d\n", ++num);

	// �����ȣ �߱� �Լ��� ȣ��
	printf("sonata ��ü ���� ��ȣ : %d\n", bodynum());
	printf("engine : %dCC ���̺긮�� ����, ", engine);
	//srand((unsigned)time(NULL));
	printf("color : %s\n", color[rand() % 5]);
	// �� ó�� ȣ��� ��, rand()�� ����߱⿡ �����ϰ� ������ ��µȴ�.

	return 0;
}

// ������ ���� �����ȣ�� ��ȯ���ִ� �Լ�
int bodynum()
{
	static int bodyNumber = 100000;
	return ++bodyNumber;
}