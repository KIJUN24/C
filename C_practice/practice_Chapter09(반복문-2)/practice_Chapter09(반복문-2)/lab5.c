/*
	do~while���� �̿��Ͽ� ���ѷ����� ���� �Ѵ�.
	Y �Ǵ� N���� ������� ������ ����� �ڵ尡 ���� �Ѵ�.
	���α׷� ���� ī��Ʈ�� �Ͽ� ����� �ϵ��� �Ѵ�.

	��°��
	< 1 ȸ ���� >
	2 X 1 = 02  3 X 1 = 03  4 X 1 = 04  5 X 1 = 05  6 X 1 = 06  7 X 1 = 07  8 X 1 = 08  9 X 1 = 09
	2 X 2 = 04  3 X 2 = 06  4 X 2 = 08  5 X 2 = 10  6 X 2 = 12  7 X 2 = 14  8 X 2 = 16  9 X 2 = 18
	...
	2 X 9 = 18  3 X 9 = 27  4 X 9 = 36  5 X 9 = 45  6 X 9 = 54  7 X 9 = 63  8 X 9 = 72  9 X 9 = 81
	���α׷��� �ٽ� �����Ͻðڽ��ϱ�? ( Y / N ) : k
	�Է��� ���ĺ� "k"��(��) ������� �ʽ��ϴ�.
	���ĺ��� �ٽ� �Է��ϼ���.
	���α׷��� �ٽ� �����Ͻðڽ��ϱ�? ( Y / N ) : y
	< 2 ȸ ���� >
	2 X 1 = 02  3 X 1 = 03  4 X 1 = 04  5 X 1 = 05  6 X 1 = 06  7 X 1 = 07  8 X 1 = 08  9 X 1 = 09
	2 X 2 = 04  3 X 2 = 06  4 X 2 = 08  5 X 2 = 10  6 X 2 = 12  7 X 2 = 14  8 X 2 = 16  9 X 2 = 18
	...
	2 X 9 = 18  3 X 9 = 27  4 X 9 = 36  5 X 9 = 45  6 X 9 = 54  7 X 9 = 63  8 X 9 = 72  9 X 9 = 81
	���α׷��� �ٽ� �����Ͻðڽ��ϱ�? ( Y / N ) : n
	�� 2ȸ ���� �� ���α׷��� �����մϴ�.
*/

#include<stdio.h>

int main(void) {

	int dan = 0, cnt = 0, recnt = 1, gob = 0; // �����ܺ���, ī��Ʈ ����, ���� ���� ����
	char op = ' ';

	do {
		printf("< %d ȸ ���� >\n", recnt);
		
		for (cnt = 1 ; cnt <= 9 ; cnt++) {
			for (dan = 2 ; dan <= 9; dan++) {
				gob = dan * cnt;
				printf("%d X %d = %02d   ", dan, cnt, gob);
			}
			printf("\n");
		}
	re_start:
		printf("���α׷��� �ٽ� �����Ͻðڽ��ϱ�? ( Y / N ) : ");
		scanf_s("%c", &op, sizeof(char));
		getchar();

		if (op == 'N' || op == 'n') {
			printf("�� %dȸ ���� �� ���α׷��� �����մϴ�.\n", recnt);
			break;
		}
		else if (op == 'Y' || op == 'y') {
			// ������ ���
			/*for (cnt = 1; cnt <= 9; cnt++) {
				for (dan = 2; dan <= 9; dan++) {
					gob = dan * cnt;
					printf("%d X %d = %02d   ", dan, cnt, gob);
				}
				printf("\n");
			}*/
			recnt++;
			continue;
		}
		else {
			printf("�Է��� ���ĺ� %c��(��) ������� �ʽ��ϴ�.\n", op);
			printf("���ĺ��� �ٽ� �Է��ϼ���.\n");
			goto re_start;
		}
		
		/*switch (op) {
			case 'Y':
			case 'y':
				recnt++;
				continue;
				break;
			case 'N':
			case 'n':
				printf("�� %dȸ ���� �� ���α׷��� �����մϴ�.\n", recnt);
				printf("���ĺ��� �ٽ� �Է��ϼ���.\n");
				return 0;
				break;
			default:
				printf("�Է��� ���ĺ� %c��(��) ������� �ʽ��ϴ�.\n", op);
				printf("���ĺ��� �ٽ� �Է��ϼ���.\n");
				goto re_start;
				break;
		}*/

	} while (1);

	return 0;
}