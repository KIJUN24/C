#include <stdio.h>
#include <random>
#include <time.h>

int getRandomNumber(int level);
void showQusetion(int level, int num1, int num2);
void success();
void fail();

int main(void)
{
	// 문이 5개가 있고 각 문마다 점점 어려운 수직 퀴즈가 출제 (랜덤)
	// 맞히면 통과, 틀리면 실패
	
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
			printf("프로그램 종료");
			exit(0);
		}
		else if (answer == num1 * num2) {
			// 성공
			success();
			count++;
		}
		else {
			// 실패
			fail();
			break;
		}
	}
	printf("당신은 5개의 비밀번호 중 %d 개를 열었습니다.\n", count);
	
	return 0;
}

int getRandomNumber(int level)
{
	return rand() % (level * 7) + 1;
}


void showQusetion(int level, int num1, int num2)
{
	printf("\n\n\n ######## %d 번째 비밀번호 ########\n", level);
	printf("\n\t%d x %d 는 \n\n", num1, num2);
	printf("##################################\n");
	printf("\n비밀번호를 입력하세요 >> (-1 입력시 종료) >> ");
}

void success()
{
	printf("맞혔습니다. 통과");
}

void fail()
{
	printf("실패...");
}