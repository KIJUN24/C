#include <stdio.h>
#include <random>
#include <time.h>

int getRandomNumber(int level);
void showQusetion(int level, int num1, int num2);
void success();
void fail();

int main(void)
{
	// ���� 5���� �ְ� �� ������ ���� ����� ���� ��� ���� (����)
	// ������ ���, Ʋ���� ����
	
	srand(time(NULL));
	int count = 0;
	
	for (int i = 1; i <= 5; i++) {
		// x * y = ??
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);
		//printf("%d x %d ?", num1, num2);
		showQusetion(i, num1, num2);

		int answer = -1;
		scanf_s("%d", &answer);
		if (answer == -1) {
			printf("���α׷� ����");
			exit(0);
		}
		else if (answer == num1 * num2) {
			// ����
			success();
			count++;
		}
		else {
			// ����
			fail();
			break;
		}
	}
	printf("����� 5���� ��й�ȣ �� %d ���� �������ϴ�.\n", count);
	
	return 0;
}

int getRandomNumber(int level)
{
	return rand() % (level * 7) + 1;
}


void showQusetion(int level, int num1, int num2)
{
	printf("\n\n\n ######## %d ��° ��й�ȣ ########\n", level);
	printf("\n\t%d x %d �� \n\n", num1, num2);
	printf("##################################\n");
	printf("\n��й�ȣ�� �Է��ϼ��� >> (-1 �Է½� ����) >> ");
}

void success()
{
	printf("�������ϴ�. ���");
}

void fail()
{
	printf("����...");
}