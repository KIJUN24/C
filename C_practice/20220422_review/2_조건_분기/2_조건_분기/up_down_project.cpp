#include <stdio.h>
#include <time.h>
#include <random>

int main(void) {
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1 ~ 100 사이의 숫자
	//printf("숫자 : %d\n", num);

	int answer = 0;
	int chance = 5;

	while (1) {
		printf("남은 기회 %d 번 \n", chance--);
		printf("숫자를 맞혀보세요 (1~100) : ");
		scanf_s("%d", &answer);

		if (answer < num) {
			printf("UP \n\n");
		}
		else if (answer > num) {
			printf("DOWN \n\n");
		}
		else if (answer == num) {
			printf("정답입니다.\n");
			break;
		}
		else {
			printf("잘못된 값입니다.\n");
		}

		if (chance == 0) {
			printf("모든 기회 소진... 실패...\n");
			printf("정답 : %d\n", num);
			break;
		}
	}
	return 0;
}