/*
	��Ÿ �б⹮�� ���� �ǽ�-1
	continue���� ���� �ǽ�
	����ڷκ��� �Է��� ���� ������ ¦���� �����հ踦 ���ϴ� ���α׷�
*/

#include<stdio.h>

int main(void) {

	int cnt = 0, su = 0, hap = 0;

	printf("Ȧ���� continue���� ����Ͽ� �����հ迡�� �����մϴ�.\n");
	printf("������ ¦���� �հ踦 ���ұ��? : ");
	scanf_s("%d", &su);

	for (cnt = 1; cnt <= su; cnt++) {
		if ((cnt % 2) != 0) {
			continue;	// continue���� ������ �Ʒ��ڵ�� ���ؿ����� �ʰ� �ٷ� ���������� ���� �̵�
		}
		else {
			hap += cnt;
			printf("%3d", cnt);

			// �� �ٿ� 10���� ���ڸ� ǥ���ϱ� ���� ���ǹ�
			if ((cnt % 20) == 0)
				printf("\n");
		}
	}
	printf("\n1���� %d���� ¦���� ���� �հ� : %d\n", su, hap);

	return 0;
}