// ���� : ���� �ϳ� '' %c
// ���ڿ� : �ϳ� �̻��� ���ڿ� "" %s

#include <stdio.h>

int main(void)
{
	char c = 'A';
	printf("%c\n", c);

	// ���ڿ� ������ ���� �ǹ��ϴ� NULL���� '\0'�� ���ԵǾ�� ��.
	char str[7] = "coding";
	printf("%s\n", str);
	printf("%d\n", sizeof(str));


	char kor[] = "�����ڵ�";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));	// 9 : �� 2byte �����ϰ� ������ NULL => 9
	// ���� 1���� : 1 byte
	// �ѱ� 1���� : 2 byte
	// char ũŰ ; 1byte


	return 0;
}