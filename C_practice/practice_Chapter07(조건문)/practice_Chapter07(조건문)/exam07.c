#include<stdio.h>

int main(void) {
	char season = ' ';

	printf("��  : A �Ǵ� a\n");
	printf("����: S �Ǵ� s\n");
	printf("����: F �Ǵ� f\n");
	printf("�ܿ�: W �Ǵ� w\n");

	printf("�����ϴ� ������ �Է����ּ��� : ");
	scanf_s("%c", &season, sizeof(season));

	switch (season)
	{
		case 'A':
		case 'a':
			printf("������ ���� : ��\n");
			printf("�޽��� : ������ �һ��ϴ� ����\n");
			break;
		case 'S':
		case 's':
			printf("������ ���� : ����\n");
			printf("�޽��� : ��Ĳ���� ������ ����\n");
			break;
		case 'F':
		case 'f':
			printf("������ ���� : ����\n");
			printf("�޽��� :��İ� ������ ǳ���� ����\n");
			break;
		case 'W':
		case 'w':
			printf("������ ���� : �ܿ�\n");
			printf("�޽��� : ���Ͼ� ���� ���� ��Ű�� ����\n");
			break;
		default:
			printf("������ ������ �����ϴ�.\n");
			printf("���ĺ��� ��ҹ��� ���о��� A,S,F,W�� ���˴ϴ�.\n");
			break;
	}

	return 0;
}