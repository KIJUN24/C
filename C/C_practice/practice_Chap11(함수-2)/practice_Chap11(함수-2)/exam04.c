// �Լ� ���� ������ ���� �ǽ�4 - ��ȯ��(���ϰ�)�� �����ϴ� �Լ�, �Ű������� ����

// ����� ���� �Լ����� ����ڷκ��� �Է��� �޴� ���ĺ��� main()�� �����ϴ� ����

#include<stdio.h>

char alpha();

int main(void) {

	char alphabet = ' ';
	
	alphabet = alpha();

	printf("\n[main()�Լ� ����]\n");
	printf("���ڰ�> ���޹��� ���ĺ� : %c\n", alphabet);
	printf("�ƽ�Ű �ڵ尪> ���޹��� ���ĺ��� �ƽ�Ű�ڵ� �� : %d\n", alphabet);

	return 0;
}

char alpha() {

	char input = ' ';

	printf("\n[alpha()�Լ� ����]\n");
	printf("���ĺ��� �Է��ϼ��� : ");
	scanf_s("%c", &input, sizeof(char));


	return input;
}