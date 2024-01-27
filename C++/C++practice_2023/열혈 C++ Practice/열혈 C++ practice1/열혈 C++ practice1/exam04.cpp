/*
	판매원들의 급여 계산 프로그램을 작성해보자.
	이 회사는 모든 판매원에게 매달 50만원의 기본 급여와 물품 판매 가격의 12%에 해당하는 돈을 지급한다.
	예를 들어 민수라는 친구의 이번 달 물품 판매 금액이 100만원이라면, 50+100X0.12=62.
	따라서 62만워ㅕㄴ을 급여로 지급 받는다.
	단, 아래의 실행의 예에서 보이듯이 이러한 급여의 계산은 -1이 입력될 때까지 계속 되어야 한다.
*/

#include<iostream>
using namespace std;

int main(void) {

	int standard_salary = 0, input_salary = 0, result_salary = 0;

	while (1) {

		standard_salary = 50;

		cout << "판매 금액을 만원 단위로 입력(-1 to end) : ";
		cin >> input_salary;

		result_salary = standard_salary + (input_salary * 0.12);

		if (input_salary < -1) {
			cout << "판매 금액을 다시 입력해주세요(0~)" << endl;
			continue;
		}

		if (input_salary == -1) {
			cout << "프로그램을 종료합니다.";
			break;
		}
		else {
			cout << "이번 달 급여 : " << result_salary << endl;
		}
	}

	return 0;
}