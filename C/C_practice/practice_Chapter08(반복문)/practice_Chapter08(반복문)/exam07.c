// 더블루프에 대한 실습-2
// 별표 찍는 연습

#include<stdio.h>

int main(void) {

	int star = 0, cnt = 0;

	for (cnt = 1; cnt <= 5; cnt++) {
		printf("%d행 : ", cnt);
		for (star = 1; star <= cnt; star++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}