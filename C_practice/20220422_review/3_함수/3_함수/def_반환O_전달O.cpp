#include <stdio.h>

int apple(int total, int ate);

int main(void)
{
	int ret = apple(5, 2); // 5���� ��� �߿��� 2���� �Ծ����.
	//printf("��� 5�� �߿� 2���� ������? %d���� ���ƿ�", ret);
	printf("��� %d�� �߿� %d���� ������? %d���� ���ƿ�",10,4,apple(10,4));


	return 0;
}

int apple(int total, int ate)
{
	return total - ate;
}