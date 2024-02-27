/*
	do~while문의 대한 실습-1
	입력받은 수까지 누적합계를 출력하는 프로그램
	while문과 다른점은 최소 한번은 수행한다.
	조건식이 뒤에 존재하기 때문이다.
	사용자의 의중을 묻고자 하는 프로그램에 적당하다.
*/

#include<stdio.h>

int main(void) {

	int su = 0, cnt = 1, hap = 0;

	printf("어디까지 합을 구할까요? : ");
	scanf_s("%d", &su);

	do {
		hap += cnt;
		printf("%d회 실행 : 누적합은 %d\n", cnt, hap);
		cnt++;
	} while (cnt <= su);	// 조건식이 뒤에 존재한다. 반드시 세미콜론을 붙이도록 한다.

	printf("1부터 %d까지 총 누적합 : %d\n", su, hap);

	return 0;
}