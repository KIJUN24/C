/*
	������Ʈ-1 : �ڵ��� �����ϴ� ������ �Լ��� �ɰ��� ��� ���� �и��Ͽ� �ǽ�.
	�Լ� ����
	1. int sonato2000();  ->  sonata2000cc ���� ���� ���
	2. int sonato2400();  ->  sonata2400cc ���� ���� ���
	3. int bodynum();	  ->  ���� ��ȣ ���� �� ��ȯ
	4. ���� ���� : char color[5][10] = {"���", "������", "�Ķ���", "����", "������"}
*/

#include "sonata.h"

int main(void)
{
	int i = 0;
	srand((unsigned)time(NULL));
	printf("\n=== sonata 2000CC & 2400CC ���� ���� ===\n");

	for (i = 1; i <= 5; i++)
	{
		sonato2000();
		sonato2400();
	}

	printf("\n=== sonata 2000CC & 2400CC ���� �Ϸ� ===\n");


	return 0;
}