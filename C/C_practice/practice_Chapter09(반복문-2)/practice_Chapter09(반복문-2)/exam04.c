/*
	do~while���� ���� �ǽ�-2
	����� ������ ����� ������ ����ϴ� ���α׷�
*/

#include<stdio.h>

int main(void) {

	int jumsu = 0, cnt = 1;  // ����, �ݺ� Ƚ�� ī�����ϴ� ����
	char op = ' ';	// ���α׷� �ݺ� ������ ������ ����

	do {
		printf("<%dȸ ����>\n", cnt);
		printf("���α׷��� �����Ͻðڽ��ϱ�?(Y/N) : ");
		scanf_s("%c", &op, sizeof(char));

		if (op == 'n' || op == 'N') {
			printf("�� %dȸ ���� �� �����մϴ�.\n", cnt);
			break;
		}
		else if (op == 'Y' || op == 'y') {
		re_jumsu:	// ����ڰ� ������ �������� ����� �� �̵��ϱ� ���ؼ� ���̺� ����
			printf("���� �Է� : ");
			scanf_s("%d", &jumsu);

			// ������ ����ϱ� ���� ��ø if�� ���
			if (jumsu <= 100 && jumsu >= 90) {
				printf("A����\n\n");
			}
			else if (jumsu < 90 && jumsu >= 80) {
				printf("B����\n\n");
			}
			else if (jumsu < 80 && jumsu >= 70) {
				printf("C����\n\n");
			}
			else if (jumsu < 70 && jumsu >= 60) {
				printf("D����\n\n");
			}
			else if (jumsu < 60 && jumsu >= 0) {
				printf("F����\n\n");
			}
			else {
				printf("���� %d��(��) ��� ������ �ƴմϴ�.\n", jumsu);
				printf("������ �ٽ� �Է����ּ���.\n");
				goto re_jumsu;	// ������ �ٽ� �Է��� �� �ֵ��� ������ ���̺��� �����ϴ� ������ �̵�
			}
			getchar(); // ��ó ���� �����
			cnt++;
		}
		else {
			printf("�Է��� ���ĺ� %c��(��) ������ �ʽ��ϴ�.\n", op);
			printf("���ĺ��� �ٽ� �Է��ϼ���.\n\n");
			getchar();
			cnt++;
		}
	} while (1);
	return 0;
}