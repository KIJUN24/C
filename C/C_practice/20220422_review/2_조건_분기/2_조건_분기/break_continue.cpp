#include <stdio.h>

int main(void) {
	/*for (int i = 1; i <= 30; i++) {
		if (i >= 6) {
			printf("������ �л��� ���� ������\n");
			break;
		}
		printf("%d�� �л��� ���� ��ǥ �غ� �ϼ���\n", i);
	}*/


	for (int i = 1; i <= 30; i++) {
		if (i >= 6 && i <= 10) {
			if (i == 7) {
				printf("%d�� �л��� �Ἦ�Դϴ�.\n", i);
				//i++;
				continue;
			}
			printf("%d �� �л��� ���� ��ǥ �غ� �ϼ���.\n", i);
		}
	}

	return 0;
}