// 수학함수에 대한 실습-2(fabs 함수)
// pow() : 매개변수가 2개인데 하나는 제곱을 할 대상이 되고, 또 하나는 지수(승)이 된다. 하여 제곱값을 구한다.
// sqrt() : 매개변수의 값의 제곱근을 구하는 함수

#include<stdio.h>
#include<math.h>

int main(void) {

	int choice = 0;
	double result = 0.0, num1 = 0.0, num2 = 0.0;

	do {
		printf("1.제곱값 출력 프로그램\n");
		printf("2.제곱근 출력 프로그램\n");
		printf("3.프로그램 종료\n");

		printf("번호 선택(1~3) : ");
		scanf_s("%d", &choice);
		printf("\n");

		switch (choice) {
			case 1:
				printf("1.제곱값 출력 프로그램\n");
				printf("제곱 대상 실수 입력 : ");
				scanf_s("%lf", &num1);

				printf("지수(승) 입력 : ");
				scanf_s("%lf", &num2);

				result = pow(num1, num2);
				printf("%lf의 %lf승의 결과값 : %lf\n\n", num1, num2, result);
				break;

			case 2:
				printf("2.제곱근 출력 프로그램\n");
				printf("제곱근을 구할 실수 입력 : ");
				scanf_s("%lf", &num1);

				result = sqrt(num1);
				printf("%lf의 제곱근 결과값 : %lf\n\n", num1, result);
				break;

			case 3:
				printf("3.프로그램 종료\n");
				printf("프로그램을 종료합니다.\n");
				return 0;
				break;

			default:
				printf("선택 오류! 숫자 1, 2, 3 중에서 선택하세요.\n");
				continue;
				break;
		}


	} while (1);

	return 0;
}