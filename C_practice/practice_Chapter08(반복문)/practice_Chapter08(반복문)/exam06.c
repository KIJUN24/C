// 더블루프에 대한 실습
// 구구단 실습

#include<stdio.h>

int main(void) {
	// 구구단 변수, 카운트 변수, 곱셈 저장 변수
	int dan = 0, cnt, result = 0;

	for (dan = 2; dan <= 9; dan++) {	// 외부 루프
		for (cnt = 1; cnt <= 9; cnt++) {	// 내부 루프
			// 내부루프의 초깃값은 외부루프가 루핑하는 만큼 초기화.
			result = dan * cnt;	// 구구단 계산
			printf("%d X %d = %d\n", dan, cnt, result);
		}
		printf("\n");	// 구구단 하나가 모두 출력되면 한 줄을 띄우도록 함.
	}

	return 0;
}