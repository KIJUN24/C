#include <stdio.h>
#include <stdlib.h>

int main(void) {

	system("title ���� 1�� �Է� �� ��� ���α׷�");

	int num = 0;

	printf("���� 1���� �Է��ϼ��� : ");
	scanf_s("%d", &num);
	// &(���ۼ�Ʈ)�� ������ �ּҸ� �˷��ִ� �ּ� ���� �������̴�.
	//printf("���� num�� �޸� �ּҰ�(10����) : %d �Դϴ�.\n", &num);
	printf("���� num�� �޸� �ּҰ�(16����) : %p �Դϴ�.\n", &num);

	printf("Ű���忡 �Էµ� ���� %d �Դϴ�.\n", num);

	return 0;
}