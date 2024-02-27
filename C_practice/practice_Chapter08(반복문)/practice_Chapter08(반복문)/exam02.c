// for 문 실습 - 2(누적 합계 구하기)

#include<stdio.h.>

int main(void) {

	// 1~100까지의 누적 합계 구하기
	int hap = 0;
	for (int i = 1; i < 101; i++)
	{
		hap += i;
		printf("%d까지 누적합 출력 : hap = %d\n", i, hap);
	}
	printf("\n\n최종 합계 : %d", hap);

	return 0;
}