// for �� �ǽ� - 5

#include<stdio.h>

int main(void) {
	int dan = 0, i = 0, gob_num = 0;

again:
	printf("���ϴ� ���� �Է��ϼ���(2~99) : ");
	scanf_s("%d", &dan);
	printf("%d��\n", dan);

	if (dan >= 100 || dan < 2) {
		printf("����ϴ� ������ ������ �ƴմϴ�.\n");
		printf("�ٽ� �Է��ϼ���.\n");
		goto again;
	}

	for (i = 1; i < 100; i++) {
		gob_num = i * dan;
		printf("%d X %d = %d\n", dan, i, gob_num);
	}
	
	return 0;
}