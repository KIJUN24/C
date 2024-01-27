/*
	문제3(for문)
	두 개의 정수를 입력받아 첫 번째 수와 두 번째 수의 사이에서 3의 배수이고,
	4의 배수인 수를 제외하고 출력하는 프로그램을 작성하시오.
	(3과 4의 공배수만 제외하고 출력하기)

	실행결과
	두 수를 입력하세요 : 1 25
	1 2 3 4 5 6 7 8 9 10 11 13 14 15 16 17 18 19 20 21 22 23 25
*/

#include<stdio.h>

//int main(void) {
//
//	int num1 = 0, num2 = 0;
//
//	printf("두 수를 입력하세요 : ");
//	scanf_s("%d %d", &num1, &num2);
//
//	for (int i = num1; i < num2; i++) {
//		if (!(i % 3 == 0) || !(i % 4 == 0)) {
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

int main(void) {

	int num1 = 0, num2 = 0;

	printf("두 수를 입력하세요 : ");
	scanf_s("%d %d", &num1, &num2);

	for (int i = num1; i < num2; i++) {
		if ((i % 3 == 0) && (i % 4 == 0)) {
			continue;
		}
		printf("%d ", i);
	}

	return 0;
}