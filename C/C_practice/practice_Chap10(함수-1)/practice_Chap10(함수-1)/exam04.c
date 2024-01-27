// 수학함수에 대한 실습-2(fabs 함수)
// fabs() : 매개변수로 들어온 값의 절댓값을 출력해주는 함수

#include<stdio.h>
#include<math.h>

int main(void) {
	double result = 0.0, result_abs = 0.0, weight1 = 0.0, weight2 = 0.0;

	printf("내 몸무게 입력 : ");
	scanf_s("%lf", &weight1);

	printf("비교 대상 몸무게 입력 : ");
	scanf_s("%lf", &weight2);

	result = weight1 - weight2;	// 음수가 나올 수 있음.
	printf("[뺄셈 연산] %.2f - %.2f = %.2f\n", weight1, weight2, result);

	result_abs = fabs(result);
	printf("절댓값 해준 몸무게 차이 : %.2f\n", result_abs);

	return 0;
}