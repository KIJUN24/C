// �Լ� ���� ������ ���� �ǽ�2 - �Ű������� ��ȯ���� ��� ���� �Լ�

#include<stdio.h>

void ne();
void dDash();
void dash();

int main(void) {

	printf("�Ű������� ��ȯ���� ��� ���� �Լ���\n");

	dash();
	printf("����� ���� �Ѽ� ne()�� ȣ���մϴ�.\n");
	dash();

	ne();
	dDash();
	printf("���α׷��� �����մϴ�.\n");
	dDash();

	return 0;
}

void ne() {
	printf("\n[����� ���� �Լ� ne() ����]\n\n");
	return;
}
void dDash() {
	printf("========================\n");
	return;
}
void dash() {
	printf("------------------------\n");
	return;
}