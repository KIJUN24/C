/*
	����3
	����ڷκ��� ��ǰ������ �Է¹޾Ƽ� �� �հ踦 ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

	��°��
	��ǰ�ݾ� �Է� : 1000
	��ǰ�ݾ� �Է� : 2000
	��ǰ�ݾ� �Է� : 3000
	��ǰ�ݾ� �Է� : 0
	��ǰ�� �� ���� : 6000��!
*/

#include<stdio.h>

int main(void) {
	
	int input_num = 0, sum = 0;
	int run = 1;

	while (run) {
		
		printf("��ǰ�ݾ� �Է� : ");
		scanf_s("%d", &input_num);

		sum += input_num;

		if (input_num == 0) {
			printf("��ǰ�� �� ���� : %d��!", sum);
			break;
		}
	}
	return 0;
}