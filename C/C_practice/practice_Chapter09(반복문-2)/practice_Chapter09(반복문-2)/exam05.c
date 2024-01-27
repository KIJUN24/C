/*
	기타 분기문에 대한 실습-1
	continue문에 대한 실습
	사용자로부터 입력을 받은 수까지 짝수의 누적합계를 구하는 프로그램
*/

#include<stdio.h>

int main(void) {

	int cnt = 0, su = 0, hap = 0;

	printf("홀수는 continue문을 사용하여 누적합계에서 제외합니다.\n");
	printf("어디까지 짝수의 합계를 구할까요? : ");
	scanf_s("%d", &su);

	for (cnt = 1; cnt <= su; cnt++) {
		if ((cnt % 2) != 0) {
			continue;	// continue문을 만나면 아래코드는 실해오디지 않고 바로 증감식으로 강제 이동
		}
		else {
			hap += cnt;
			printf("%3d", cnt);

			// 한 줄에 10개의 숫자를 표현하기 위한 조건문
			if ((cnt % 20) == 0)
				printf("\n");
		}
	}
	printf("\n1부터 %d까지 짝수의 누적 합계 : %d\n", su, hap);

	return 0;
}