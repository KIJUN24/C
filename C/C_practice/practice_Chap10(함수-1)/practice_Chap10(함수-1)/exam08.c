// ��ƿ��Ƽ �Լ��� ���� �ǽ�-3(Sleep()�Լ�)
// Sleep() : CPU�� ������ �Ͻ�����(timed waiting)���·� �����.
// ��, �Ű������� ���� ������ 1/1000���̴�.

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>		// Sleep()�� ����ϱ� ����

int main(void) {

	system("title Sleep()�Լ��� ���� �ǽ�");

	printf("���� ���α׷��� �����ϴ� ���丮 ���� ��� \n");
	system("dir");
	
	printf("\n�� ���α׷��� 10�� �Ŀ� ����˴ϴ�.\n");

	Sleep(10000);	// 10�ʰ� �Ͻ�����

	system("cls");

	return 0;
}