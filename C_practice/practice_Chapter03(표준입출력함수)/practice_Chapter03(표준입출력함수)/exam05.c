#include<stdio.h>
#include<stdlib.h>

int main(void) {

	system("title ���ڿ� ������ �ڸ��� ����");

	printf("|%s|", "C program!");
	printf(" : ���ڿ� �⺻ �ڸ��� ���\n");

	printf("|%12s|", "C program!");
	printf(" : ��ü �ڸ��� 12�ڸ�, ������ ����\n");

	printf("|%-12s|", "C program!");
	printf(" : ��ü �ڸ��� 12�ڸ�, ���� ����\n\n");

	printf("----------------------------------------\n");

	// �迭�� �̿��Ͽ� ���ڿ� ���(������ �Ҵ��ϴ� �ڷ���)
	char str[15] = "C program!";
	printf("%s\n", str);
	printf("str�� �ּ� : %p\n", str);
	// �����͸� �̿��Ͽ� ���ڿ� ���(�����ʹ� �ּҸ� �����ϴ� ������ ����)
	char *pstr = "C program!";
	printf("%s\n", pstr);
	printf("pstr�� �ּ� : %p\n", pstr);

	return 0;
}