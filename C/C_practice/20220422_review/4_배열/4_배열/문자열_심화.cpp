#include <stdio.h>

int main()
{
	//char c_array[7] = { 'c', 'o', 'd', 'i', 'n', 'g', '\0' };
	//printf("%s\n", c_array);


	//char c_array[10] = { 'c', 'o', 'd', 'i', 'n', 'g'};	// ������ ĭ�� NULL�� ä������.
	//printf("%s\n", c_array);


	// ���ڿ� �Է¹ޱ� : ������ ���� ����
	char name[256];
	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);


	return 0;
}