/*
	����3
	���� ���뿡 �´� ���α׷��� �ۼ��Ͻÿ�.
	����
	������ ���� 1�� ���� �� �ʱ�ȭ : char alpha = ' '
	���ĺ� 1�� �Է� ����
	�Է��� ���ĺ��� ���� ��� ���� ������ ���
	�Է��� ���ĺ��� �ش��ϴ� �ƽ�Ű�ڵ尪�� 10���� ������ ���
	�Է��� ���ĺ��� �������� 8��°�� �ش��ϴ� ���ĺ��� ���
	��°��
	���ĺ� �Է� : K
	�Է��� ���ĺ� : K
	���ĺ� �ƽ�Ű�ڵ尪 : 75
	�Է��� ���ĺ� + 8 : S
*/

#include<stdio.h>

int main(void) {

	char alpaha = ' ';

	printf("���ĺ� �Է� : ");
	scanf_s("%c", &alpaha, sizeof(alpaha));
	printf("�Է��� ���ĺ� : %c\n", alpaha);
	printf("���ĺ� �ƽ�Ű�ڵ尪 : %d\n", alpaha);
	int int_alpha = alpaha;
	char temp_alpha = int_alpha + 8;
	printf("�Է��� ���ĺ� + 8 : %c", temp_alpha);

	return 0;
}