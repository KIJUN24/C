/*
	문제 1(for문)
	정수형 변수를 2개 선언하여, 1~100까지 루핑을 도는데 누적합이 3000이나 3000이상이 될 때, 루프를 빠져나가는 프로그램을 작성하시오.
	실행 결과
	1~73 합 : 3003
*/

#include<stdio.h>

//int main(void) {
//
//	int sum = 0, i = 0;
//
//	for (i = 1 ; sum <= 3000 ; i++) {
//		sum += i;
//	}
//	printf("%d~%d 합 : %d\n", 1, i, sum);
//	return 0;
//}

int main(void) {

	int i = 0, sum = 0;

	for (i = 1; i <= 100; i++) {
		sum += i;
		printf("i : %d, sum : %d\n", i, sum);

		if (sum >= 3000) {
			break;
		}
	}
	printf("1~%d 합 : %d\n", i, sum);
	return 0;
}