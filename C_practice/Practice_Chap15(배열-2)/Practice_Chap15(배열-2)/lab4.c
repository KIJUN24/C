/*
	����-4
	����ڷκ��� ���ڿ�(�ܾ�)�� �Է¹޴µ� ���ѷ����� �����ϰ� Ż�������� "."�� �ԷµǴ� ���ѷ����� ������������ do~while���� �̿��Ѵ�.
	string.h ���Ͽ� �ִ� strcat(), strcmp() �� �� �̿��Ͻÿ�.
	�ܾ �Է¹����� ��� �ܾ ������ �ϳ��� ���� ���� ���·� ���� ����Ͻÿ�.

	������
	�ܾ� �Է� : ab
	�ܾ� �Է� : cd
	�ܾ� �Է� : ef
	�ܾ� �Է� : .
	���� ��� : ab cd ef .
*/

// strcat() ���� �Էµ� �ܾ ���δ�.
// strcmp() ���� �񱳸� �� ��� ������ ���Ѵ�.

#include<stdio.h>
#include<string.h>
#define MAX_LENGTH 100
#define WORD_LENGTH 20

int main(void)
{
	char str1[MAX_LENGTH] = "";		// �ܾ �����Ͽ� ������ �迭�� ���� �� �ʱ�ȭ
	char word[WORD_LENGTH] = "";

	do
	{
		printf("�ܾ� �Է� : ");
		scanf_s(" %s", word, sizeof(word));

		// �ܾ �����ϴ� �ڵ�
		strcat_s(str1, sizeof(str1), word);		// �Է¹��� �ܾ ���� ���� ���δ�.
		strcat_s(str1, sizeof(str1), " ");		// �ܾ ������ �� �ֵ��� �� ĭ�� �����Ѵ�.

	} while (strcmp(word, "."));	// �ܾ� �Է½� "."�� �Է��ϸ� 0�� ���ϵǾ� ������ ����������.

	printf("����� ���ڿ� ��� : %s\n", str1);

	return 0;
}