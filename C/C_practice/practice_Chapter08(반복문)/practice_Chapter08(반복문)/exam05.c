// for 문 실습 - 5

#include<stdio.h>

int main(void) {
	int dan = 0, i = 0, gob_num = 0;

again:
	printf("원하는 단을 입력하세요(2~99) : ");
	scanf_s("%d", &dan);
	printf("%d단\n", dan);

	if (dan >= 100 || dan < 2) {
		printf("허용하는 구구단 범위가 아닙니다.\n");
		printf("다시 입력하세요.\n");
		goto again;
	}

	for (i = 1; i < 100; i++) {
		gob_num = i * dan;
		printf("%d X %d = %d\n", dan, i, gob_num);
	}
	
	return 0;
}