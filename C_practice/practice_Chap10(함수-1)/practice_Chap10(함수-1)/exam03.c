// �����Լ��� ���� �ǽ�-1(ceil, floor �Լ�)
// ceil() : �Ű������� ���� double���� ������ �ø�ó��
// floor() : �Ű������� ���� double���� ������ ����ó��

#include<stdio.h>
#include<math.h>	// �����Լ��� �̿��ϱ� ���Ͽ� math.h�� ���.

int main(void) {
	double value = 35.8;
	printf("%lf\n", ceil(value));	// �ø� �Լ�
	printf("%lf\n", floor(value));	// ���� �Լ�

	return 0;
}