/* 
   ����1
   ���� ���뿡 �´� ���α׷��� �ۼ��Ͻÿ�.
   ����
   ����, ����, ���� ������ ���� Ű����� �Է�
   3������ ������ ��� ���� ���
   ��½� ��ü �ڸ����� ������ 6�ڸ�, ����� 7�ڸ��� ����
   ����� �Ҽ� ��°�ڸ������� ����
   ��� ����ÿ��� 3��� 3.0���� ������
   ��°��
   1. ���� ���� : 88
   2. ���� ���� : 99
   3. ���� ���� : 88
   �� �� : 275
   �� �� : 91.67
   */

#include<stdio.h>
#include<stdlib.h>

int main(void) {

	system("title ��� ���� ����ϱ�");
	
	int kor = 0, eng = 0, mat = 0, total = 0;
	float eva = 0;

	printf("���� �Է��ϱ� : ");
	scanf_s("%d %d %d", &kor, &eng, &mat);
	printf("1. ���� ���� : %d\n", kor);
	printf("2. ���� ���� : %d\n", eng);
	printf("3. ���� ���� : %d\n", mat);

	total = kor + eng + mat;
	printf("�� �� : %d\n", total);

	eva = total / 3.0;

	printf("�� �� : %.2f", eva);

	return 0;
}