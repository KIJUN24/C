/*
	��Ÿ �б⹮�� ���� �ǽ�-2
	goto���� ���� �ǽ�
	���ѷ����� ���鼭 �Է��� ���ĺ��� �빮������ �Ǻ��ϴ� ���α׷�
*/

#include<stdio.h>

int main(void) {

	char op = ' ';

	do {
	reset:	// ���̺� ����
		printf("���ĺ� �빮�� �Է� : ");
		scanf_s("%c", &op, sizeof(char));
		getchar();

		if (op >= 'A' && op <= 'Z') {
			printf("�Է��� ���ĺ� %c�� �빮�ڰ� �½��ϴ�.\n", op);
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
		else {
			printf("�Է��� ���ĺ� %c�� �빮�ڰ� �ƴմϴ�..\n", op);
			printf("���ĺ��� �ٽ� �Է��ϼ���.\n");
			goto reset;
		}

	} while (1);

	return 0;
}