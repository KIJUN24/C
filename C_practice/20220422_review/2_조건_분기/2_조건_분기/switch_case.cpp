#include <stdio.h>
#include <time.h>
#include <random>

int main(void) {

	// ����:0  ����:1  ��:2
	srand(time(NULL));
	int i = rand() % 3;	
	/*if (i == 0) {
		printf("����");
	}
	else if (i == 1) {
		printf("����");
	}
	else if (i == 2) {
		printf("��");
	}
	else
	{
		printf("�����");
	}*/


	switch (i) {
	case 0:
		printf("����\n");
		break;
	case 1:
		printf("����\n");
		break;
	case 2:
		printf("��\n");
		break;
	default:
		printf("�����\n");
		break;
	}


	return 0;
}