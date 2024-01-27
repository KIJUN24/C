/*
	문제4(for문)
	사용자로부터 하나의 정수를 입력받고,
	1에서 입력받은 정수까지 2와 3의 공배수를 제외한 합을 구하는 프로그램을 작성하시오.
	
	실행결과
	얼마까지의 합을 구하고 싶나요?(단, 2와 3의 공배수는 제외) 입력하세요 : 500
	1에서 500까지 2와 3의 공배수를 뺀 합은 104334입니다.
*/


#include<stdio.h>

int main(void) {

	int input_num = 0, sum = 0;

	printf("얼마까지의 합을 구하고 싶나요? (단, 2와 3의 공배수는 제외) 입력하세요 : ");
	scanf_s("%d", &input_num);

	for (int i = 1; i <= input_num; i++) {
		if (!(i % 2 == 0) || !(i % 3 == 0)) {
			sum += i;
			printf("%d번째 숫자 더하기 : %d\n", i, sum);
		}
	}
	
	printf("1에서 %d까지 2와 3의 공배수를 뺀 합은 %d입니다.",input_num ,sum);
	
	return 0;
}