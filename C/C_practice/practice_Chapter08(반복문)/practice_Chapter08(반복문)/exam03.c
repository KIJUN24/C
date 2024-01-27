// for 문 실습 - 3(홀수 합계 구하기)

#include<stdio.h>

int main(void) {

	int hap = 0;

	for (int i = 1; i < 101; i += 2) {
		hap += i;
		printf("%d까지의 누적합 : %d\n", i, hap);
	}
	printf("\n\n홀수 최종 합계 : %d", hap);

	return 0;
}