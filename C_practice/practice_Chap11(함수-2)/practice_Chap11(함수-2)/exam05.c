// 함수 원형 종류에 대한 실습5 - 반환값(리턴값)과 매개변수가 모두 존재하는 함수

// 키보드로부터 입력을 받아서 누적하는 예제

#include<stdio.h>

int sum(int x);

int main(void) {

	int input = 0;
	int result = 0;

	printf("[main() 함수 영역]\n");
	printf("숫자를 입력해주세요 : ");
	scanf_s("%d", &input);

	result = sum(input);

	printf("[main() 함수 다시 시작]\n");
	printf("1부터 %d까지의 합은 %d입니다.\n", input, result);
	printf("[main() 함수 종료]\n");

	return 0;
}

int sum(int x) {

	int cnt = 0, hap = 0;

	printf("[sum() 함수 실행]\n");

	for (cnt = 1; cnt <= x; cnt++) {
		hap += cnt;
	}
	printf("[sum() 함수 계산 후 종료]\n");

	return hap;
}