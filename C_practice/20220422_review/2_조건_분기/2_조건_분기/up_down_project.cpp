#include <stdio.h>
#include <time.h>
#include <random>

int main(void) {
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1 ~ 100 ������ ����
	//printf("���� : %d\n", num);

	int answer = 0;
	int chance = 5;

	while (1) {
		printf("���� ��ȸ %d �� \n", chance--);
		printf("���ڸ� ���������� (1~100) : ");
		scanf_s("%d", &answer);

		if (answer < num) {
			printf("UP \n\n");
		}
		else if (answer > num) {
			printf("DOWN \n\n");
		}
		else if (answer == num) {
			printf("�����Դϴ�.\n");
			break;
		}
		else {
			printf("�߸��� ���Դϴ�.\n");
		}

		if (chance == 0) {
			printf("��� ��ȸ ����... ����...\n");
			printf("���� : %d\n", num);
			break;
		}
	}
	return 0;
}