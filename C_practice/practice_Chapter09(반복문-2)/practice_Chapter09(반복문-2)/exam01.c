// while문의 실습-1(누적합계)
// while문은 주용도가 무한루프 전용이며, 아울러 for문에 비해서 초깃값, 조건식, 증감식이 각각 따로 떨어져 있다.

#include<stdio.h>

int main(void) {

	int su = 0, cnt = 0, hap = 0;

re: // goto문을 위한 레이블 이름을 설정
	printf("어디까지 합을 구할까요? ");
	scanf_s("%d", &su);

	//음수인지 양수인지에 따라서 분기
	if (su < 0) {	// 음수라면...
		printf("음의 정수는 허용하지 않습니다.\n");
		printf("프로그램을 다시 시작합니다.\n");
		goto re; // 음의 정수가 들어오면 위의 메시지를 출력하고 re레이블로 강제 이동
	}
	else {
		cnt = 1; // 반복문 초깃값 선언

		while (cnt <= su) {	// 반복문을 위한 조건문 설정
			hap += cnt;
			printf("%d회 반복 누적합 : %d\n", cnt, hap);
			cnt++;	// 증감식이 while문 내부에 존재하고 있다.
		}
		printf("1부터 %d까지 누적합 : %d\n", su, hap);
	}

	return 0;
}