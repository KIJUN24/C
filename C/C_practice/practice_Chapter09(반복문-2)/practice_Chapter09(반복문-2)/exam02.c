// while문의 실습-2(누적합계를 무한루프로 변경)
// 누적합이 50을 초과하면 멈추게끔 한다.
#include<stdio.h>

int main(void) {

	int su = 0, cnt = 0, hap = 0;
	int con = 0;

	while (1) {	// 무한루프를 수행하기 위해서 조건을 1로 주면 무조건 참이 된다. 0은 FALSE가 된다.

		printf("어디까지 합을 구할까요? ");
		scanf_s("%d", &su);

		//음수인지 양수인지에 따라서 분기
		if (su < 0) {	// 음수라면...
			printf("음의 정수는 허용하지 않습니다.\n");
			printf("프로그램을 다시 시작합니다.\n");
			continue;	// 아래 문장을 실행하지 않고 반복문의 처음으로 이동
		}
		else {
			cnt = 1; // 반복문 초깃값 선언

			while (cnt <= su) {	// 반복문을 위한 조건문 설정
				hap += cnt;
				printf("%d회 반복 누적합 : %d\n", cnt, hap);

				// 누적합이 50초과가 되었는지 확인
				if (hap > 50) {
					printf("누적합계가 50을 초과하여 프로그램을 종료합니다.\n");
					break;
				}
				cnt++;	// 증감식이 while문 내부에 존재하고 있다.
			}
		}
		// 외부루프를 빠져나가기 위한 탈출 코드
		printf("계속하시겠습니까? (1:계속, 0:중지) : ");
		scanf_s("%d", &con);

		if (con == 0) {
			printf("프로그램을 종료합니다.\n");
			break;
		}
	}

	return 0;
}

// 무한루프를 실행할 떄는 탈출 코드가 반드시 존재해야 한다.