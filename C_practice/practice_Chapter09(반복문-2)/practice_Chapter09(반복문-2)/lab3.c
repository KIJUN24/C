/*
	문제3
	사용자로부터 상품가격을 입력받아서 그 합계를 구하는 프로그램을 작성하시오.

	출력결과
	상품금액 입력 : 1000
	상품금액 입력 : 2000
	상품금액 입력 : 3000
	상품금액 입력 : 0
	상품의 총 가격 : 6000원!
*/

#include<stdio.h>

int main(void) {
	
	int input_num = 0, sum = 0;
	int run = 1;

	while (run) {
		
		printf("상품금액 입력 : ");
		scanf_s("%d", &input_num);

		sum += input_num;

		if (input_num == 0) {
			printf("상품의 총 가격 : %d원!", sum);
			break;
		}
	}
	return 0;
}