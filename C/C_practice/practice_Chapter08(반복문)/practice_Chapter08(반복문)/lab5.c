/*
	����5(���� for��)
	�Ҽ��� 2���� ��� ���� ��, 2000���� ���� �ִ����� ���̰� ���������� �������� �Ҽ��� ��������
	�˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�.

	������
	���� 2000���� ���� �ִ� ���� = 1990
	�� ���� �ִ� �Ҽ��� 137�̴�.
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0

int main(void) {

	int i = 0, j = 0, sum = 0;
	
	// ������ �Ҽ� ����� ����
	int prime_number = 2;

	// boolŸ�� �ڷ����� �����Ƿ� ��ü�� int���� ����
	int chk = TRUE;


	for (i = prime_number;; ++i) {
		// �Ҽ� ã��
		for (j = 2; j % i; ++j) {
			if (i % j == 0) {
				chk = FALSE;
				break;
			}
		}
		// �Ҽ���� chk���� TRUE
		if (chk) {
			sum += i;	// �Ҽ��� ���� ������Ų��.
			if (sum > 2000) {
				break;
			}
			else {
				prime_number = i;	// ������ �Ҽ� �����ϴ� �κ�
			}	
		}
		else {  //�Ҽ��� �ƴ϶�� chk�� TRUE�� ������.
			chk = TRUE;
		}

	}
	sum -= prime_number;
	// ����ϱ�.
	printf("���� 2000���� ���� �ִ����� = %d\n", sum);
	printf("�� ���� �ִ� �Ҽ��� ���� = %d\n", prime_number);


	return 0;
}