// ��ƿ��Ƽ �Լ��� ���� �ǽ� - 2(system() �Լ�)
// system() : �Ű������� ���� ���� �ü��(OS)�� �����ϴ� �Լ�

#include<stdio.h>
#include<stdlib.h>	// system()�Լ��� ����ϱ� ����
#include<conio.h>	// _getch()�Լ��� ����ϱ� ����

int main(void) {

	system("titel system()�Լ� ��� ���α׷�");	// ����â�� Ÿ��Ʋ ���(title)

	printf("���� ���α׷��� �����ϴ� ���丮(������ ����)�� ���� ���\n");

	system("dir");	// ���� ���丮�� ������ ����ϴ� ��ɾ�


	printf("\n\n �ƹ� Ű�� ������ ���α׷��� ����˴ϴ�.\n");
	printf("���� �Է� : ");
	_getch();	// ������ ���� ���� �Է��Լ�


	system("cls"); // ȭ���� ��� ��������



	return 0;
}