/*
	���̺귯�� �Լ��� ���� �ǽ�-2(srand(), rand() �Լ�)
	srand()�Լ��� 1970�� 1�� 1�� 0�ú��� ���ݱ��� �귯�� �ð��� ��Ƽ� �ٸ� ������ �߻���Ű�� �Լ�
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NUM 45

int main(void) {
	int cnt = 0;

	printf("1~45���� ������ ���� 6���� ����մϴ�.\n");
	// void srand(int){}, �ð��� ��� �帣�� Ư�� �ð��븦 ��Ƽ� ���� �߻�, ���� �ٸ� ������ �߻��� �ȴ�.
	srand((unsigned)time(NULL));	

	printf("srand()�Լ��� �̿��Ͽ� ������ ���� ����մϴ�.\n");
	
	for (cnt = 1; cnt <= 6; cnt++) {
		printf(" %d", 1 + (rand() % NUM));
	}

	return 0;
}