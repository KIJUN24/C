/*
	����2
	����ڷκ��� 2���� ���ڿ��� �Է¹޾Ƽ� ù ��° ���ڿ��� "�氡�氡"�̰�,
	�� ��° ���ڿ��� "�ȳ�ȳ�"�̶�� ���ڿ��� ���� ��ȯ�ؼ�
	ù ��° ���ڿ��� "�ȳ�ȳ�"�� �ǰ�, �� ��° ���ڿ��� "�氡�氡"�� �ǵ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	�迭�� ũ��� ��ũ�� ��� LENGTH�� 15�� �����Ͽ� �̿�����.

	������
	�� ���� ���ڿ��� ��ȯ�ϴ� ���α׷�
	ù ��° ���ڿ� �Է� : �ȳ�
	�� ��° ���ڿ� �Է� : �氡

	==================================
	�� ���� ���ڿ��� ��ȯ�ϱ� ���� ��
	ù ��° ���ڿ� �� : �ȳ�
	�� ��° ���ڿ� �� : �氡
	==================================
	�� ���� ���ڿ��� ��ȯ �� �� ��
	ù ��° ���ڿ� �� : �氡
	�� ��° ���ڿ� �� : �ȳ�

*/

#include<stdio.h>
#include<string.h>		// strcpy() �Լ��� ����ϱ� ���ؼ� include��.
#define _CRT_SECURE_NO_WARNINGS		// ������ ��� �����ع����� ��ũ�� ���
									// (C4996 ���� �߻� �� ���� ��ũ�� ����� ��������)
#define LENGTH 15

int main(void)
{
	char first_char[LENGTH] = "", second_char[LENGTH] = "", temp_char[LENGTH] = "";
	int i;

	printf("�� ���� ���ڿ��� ��ȯ�ϴ� ���α׷�\n");
	printf("ù ��° ���ڿ� �Է� : ");
	scanf_s(" %s", first_char, sizeof(first_char));
	printf("�� ��° ���ڿ� �Է� : ");
	scanf_s(" %s", second_char, sizeof(second_char));

	printf("\n========================================\n");
	printf("�� ���� ���ڿ��� ��ȯ�ϱ� ���� ��\n");
	printf("ù ��° ���ڿ� �� : %s\n", first_char);
	printf("�� ��° ���ڿ� �� : %s\n", second_char);

	// ���ڿ��� ���� ��ȯ�ϴ� �ڵ�
	//for (i = 0; i < LENGTH; i++)
	//{
	//	temp_char[i] = first_char[i];		// ù ��° ���ڿ��� �� ���ڿ��� �ű�� �ڵ�
	//	first_char[i] = second_char[i];		// �� ��° ���ڿ��� �� ù ��° ���ڿ��� �ű�� �ڵ�
	//	second_char[i] = temp_char[i];		// ù ��° ���ڿ��� �־���� ���� �� ��° �� ���ڿ��� �ű�� �ڵ�
	//}


	// strcpy(���ڿ�1, ���ڿ�2) �Լ��� �̿��ؼ� ��ȯ�ϴ� �ڵ�
	strcpy(temp_char, first_char);		// first_char ���ڿ��� temp_char���ڿ��� �����ϴ� �ڵ�
	strcpy(first_char, second_char);	// second_char ���ڿ��� first_char���ڿ��� �����ϴ� �ڵ�
	strcpy(second_char, temp_char);		// temp_char ���ڿ��� second_char���ڿ��� �����ϴ� �ڵ�

	printf("\n========================================\n");
	printf("�� ���� ���ڿ��� ��ȯ �� �� ��\n");
	printf("ù ��° ���ڿ� �� : %s\n", first_char);
	printf("�� ��° ���ڿ� �� : %s\n", second_char);


	return 0;
}