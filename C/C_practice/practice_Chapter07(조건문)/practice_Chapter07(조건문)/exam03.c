#include<stdio.h>

int main(void) {
	char ch = ' ';

	printf("���ĺ� �ϳ��� �Է� : ");
	scanf_s("%c", &ch, sizeof(ch));

	if (ch >= 'A' && ch <= 'Z')
	{
		printf("�Է��� ���ĺ� %c�� �빮���̰�\n", ch);
		printf("�ƽ�Ű �ڵ� ���� %d�Դϴ�.\n", ch);
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		printf("�Է��� ���ĺ� %c�� �ҹ����̰�\n", ch);
		printf("�ƽ�Ű �ڵ� ���� %d�Դϴ�.\n", ch);
	}
	else
	{
		printf("��� �Է����ּ���.\n");
	}

	return 0;
}