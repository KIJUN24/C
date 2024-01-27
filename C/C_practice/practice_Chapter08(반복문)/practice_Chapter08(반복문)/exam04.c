// for 문 실습 - 4(5의 배수를 누적 합계)

#include<stdio.h>

int main(void) {

	int hap = 0;
	int i = 0;

	printf("어디까지의 5의 배수를 구할까요 : ");
	scanf_s("%d", &i);

	for (i = 0; i < 101; i += 5) {
		hap += i;
		printf("%d번째까지 누적합 : %d\n", i, hap);
	}
	printf("\n\n");
	printf("5의 배수 최종 누적 합계 : %d", hap);
	
	return 0;
}