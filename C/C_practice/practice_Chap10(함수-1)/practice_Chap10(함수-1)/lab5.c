/*
	����5 - Ŀ�� ���Ǳ� ���α׷� ����� ����
	�Լ� 1�� ������ : int coffee_machine(char coffee, char guest);
	�������� : main() �ܺο� �����ϸ�, �ƿ﷯ ���α׷� ����� ���ῡ ���� ������ �ǰų� �Ҹ��� ���� �ȴ�.
	���α׷��� ������ ����Ŭ�̶� �����ϴ�.
	���ú���(��������) : �Լ� ���ο� �����ϸ�, �ݵ�� �ʱ�ȭ�� ��������� �Ѵ�.
	�ƿ﷯ �Լ� ���ᰡ �� �� �Ҹ��� �̷������.

	��°��
	�� ���� Ŀ�Ǹ� ���Ͻʴϱ�? : 5
	A�� Ŀ�Ǹ� �������ּ���(1:��, 2:īǪġ��, 3:�Ƹ޸�ī��, 4:�����߶�) : 1
	A�� Ŀ�� ���Խ��ϴ�.
	���Դϴ�.

	B�� Ŀ�Ǹ� �������ּ���(1:��, 2:īǪġ��, 3:�Ƹ޸�ī��, 4:�����߶�) : 3
	B�� Ŀ�� ���Խ��ϴ�.
	�Ƹ޸�ī���Դϴ�.
	
	...

	E�� Ŀ�Ǹ� �������ּ���(1:��, 2:īǪġ��, 3:�Ƹ޸�ī��, 4:�����߶�) : 5
	E�� �ֹ� ����ϼ̽��ϴ�.
	ó������ �ٽ� �������ּ���.
*/

#include<stdio.h>

int coffe_machine(char coffee, char guest);

// �������� ���� �� �ʱ�ȭ
int coffee = 0;
char latte[6] = "��";
char capucino[12] = "īǪġ��";
char americano[16] = "�Ƹ޸�ī��";
char macchiato[12] = "�����߶�";
char guest = 'A';

int main(void) {

	int i = 0, cnt = 0, choice_num = 0;

	printf("�� ���� Ŀ�Ǹ� ���Ͻʴϱ�?");
	scanf_s("%d", &cnt);
	getchar();

	for (i = 0; i <= cnt; guest++) {
		printf("%c��, � Ŀ�Ǹ� �ֹ��Ͻðھ��?", guest);
		printf("(1:��, 2:īǪġ��, 3:�Ƹ޸�ī��, 4:�����߶�)\n");
		scanf_s("%d", &coffee);
		getchar();

		choice_num = coffe_machine(coffee, guest);

		// �ֹ� ��ҽ� ������ ������������ �ϴ� �ڵ�
		if (choice_num == -1) {
			printf("ó������ �ٽ� �������ּ���\n\n");
			break;
		}
	}
	return 0;
}

int coffe_machine(int coffee, char guest) {
	
	if (coffee == 1) {
		printf("%c�� Ŀ�� ���Խ��ϴ�.\n", guest);
		printf("%s Ŀ���Դϴ�.\n\n", latte);
	}
	else if (coffee == 2) {
		printf("%c�� Ŀ�� ���Խ��ϴ�.\n", guest);
		printf("%s Ŀ���Դϴ�.\n\n", capucino);
	}
	else if (coffee == 3) {
		printf("%c�� Ŀ�� ���Խ��ϴ�.\n", guest);
		printf("%s Ŀ���Դϴ�.\n\n", americano);
	}
	else if (coffee == 4) {
		printf("%c�� Ŀ�� ���Խ��ϴ�.\n", guest);
		printf("%s Ŀ���Դϴ�.\n\n", macchiato);
	}
	else {
		printf("%c�� �ֹ� ����ϼ̽��ϴ�.\n\n", guest);
		return -1;		// �ֹ� ��ҽ� ��ȯ���� -1�� �ְ� �����Լ��� ������ Ż���Ű�� ������ϰԲ� �Ѵ�.
	}
	return 0;
}
