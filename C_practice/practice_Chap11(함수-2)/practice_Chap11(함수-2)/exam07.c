/*
	�μ� ���� ���(2����)
	1. ���� ���� ȣ��(call by value)
	����� ���� �Լ��� ȣ���� ��, �μ��� �� ��ü�� �����ϴ� ���̰�,
	�� ���޵� ���� �Լ��� �谳���� ������ ����Ǿ� ����� ����ȴ�.
	�Լ��� �����ϴ��� ȣ���� �������� ���� ������ ���� �ʴ´�.
	�Լ� ȣ���� �� ���� ������ �Ű������� ������ Ÿ���� ��ġ�ؾ� �Ѵ�.

	call by value�� ��
	A : "������ ���� �� �ô�?"
	B : "4�ÿ���"
	---> �ð��� ���� ������ ������ �Ұ��ϴ�.
*/

#include<stdio.h>

// �Լ� ����(����)
int call_value(int su);

int main(void)
{
	int num = 100, call_after = 0;

	printf("main() �Լ� ����\n");
	printf("�Լ�ȣ�� ��> num�� �� : %d\n", num);
	printf("�Լ�ȣ�� ��> num�� �ּҰ� : %p\n", &num);
	printf("�Լ�ȣ�� ��> call_after�� �� : %d\n", call_after);
	printf("�Լ�ȣ�� ��> call_after�� �ּҰ� : %p\n", &call_after);

	call_after = call_value(num);	// call by value

	printf("main()�Լ� �������� ���ƿ�\n");

	printf("�Լ�ȣ�� ��> num�� �� : %d\n", num);
	printf("�Լ�ȣ�� ��> num�� �ּҰ� : %p\n", &num);
	printf("�Լ�ȣ�� ��> call_after�� �� : %d\n", call_after);
	printf("�Լ�ȣ�� ��> call_after�� �ּҰ� : %p\n", &call_after);


	return 0;
}

// ����� ���� �Լ� ����
int call_value(int num)
{
	printf("call_value() �Լ� ����\n");
	printf("����Ǿ��� num�� �� : %d\n", num);
	printf("call_value()�� num �ּҰ� : %p\n", &num);
	printf("�Լ� ����> ����� �� 100�� 10�� ���� main()�� ��ȯ��\n");

	num += 10;
	printf("�Լ� ���� �Ϸ�> main()�� ��ȯ �Ϸ��\n");

	return num;
}
