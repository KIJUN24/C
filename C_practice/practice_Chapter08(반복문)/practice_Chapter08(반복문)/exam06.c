// ��������� ���� �ǽ�
// ������ �ǽ�

#include<stdio.h>

int main(void) {
	// ������ ����, ī��Ʈ ����, ���� ���� ����
	int dan = 0, cnt, result = 0;

	for (dan = 2; dan <= 9; dan++) {	// �ܺ� ����
		for (cnt = 1; cnt <= 9; cnt++) {	// ���� ����
			// ���η����� �ʱ갪�� �ܺη����� �����ϴ� ��ŭ �ʱ�ȭ.
			result = dan * cnt;	// ������ ���
			printf("%d X %d = %d\n", dan, cnt, result);
		}
		printf("\n");	// ������ �ϳ��� ��� ��µǸ� �� ���� ��쵵�� ��.
	}

	return 0;
}