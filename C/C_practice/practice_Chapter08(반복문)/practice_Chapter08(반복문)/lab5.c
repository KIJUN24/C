/*
	문제5(더블 for문)
	소수를 2부터 계속 더할 때, 2000보다 작은 최대합은 몇이고 마지막으로 더해지는 소수는 무엇인지
	알아내는 프로그램을 작성하시오.

	실행결과
	합이 2000보다 적은 최대 합은 = 1990
	그 때의 최대 소수는 137이다.
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0

int main(void) {

	int i = 0, j = 0, sum = 0;
	
	// 마지막 소수 저장용 변수
	int prime_number = 2;

	// bool타입 자료형이 없으므로 대체형 int변수 선언
	int chk = TRUE;


	for (i = prime_number;; ++i) {
		// 소수 찾기
		for (j = 2; j % i; ++j) {
			if (i % j == 0) {
				chk = FALSE;
				break;
			}
		}
		// 소수라면 chk변수 TRUE
		if (chk) {
			sum += i;	// 소수의 값을 누적시킨다.
			if (sum > 2000) {
				break;
			}
			else {
				prime_number = i;	// 마지막 소수 저장하는 부분
			}	
		}
		else {  //소수가 아니라면 chk를 TRUE로 돌린다.
			chk = TRUE;
		}

	}
	sum -= prime_number;
	// 출력하기.
	printf("합이 2000보다 적은 최대합은 = %d\n", sum);
	printf("그 떄의 최대 소수의 합은 = %d\n", prime_number);


	return 0;
}