/*
	종합 실습 예제-1
	철수가 가지고 있는 돈으로 최대한의 사탕을 사려고 한다.
	현재 1000원이 있고 사탕의 가격이 300원이라고 하자.
	최대한 살 수 있는 사탕의 개수와 나머지 돈은 얼마인가?
	나눗셈 연산자 '/'와 나머지 연산자 '%'를 사용하여 아래와 같이 출력이 되도록 하자
*/
/*
	출력결과
	현재 가지고 있는 돈 : 1000
	캔디의 가격 : 300
	최대로 살 수 있는 캔디의 개수 = 3
	캔디 구입 후 남은 돈 = 100
*/

#include<iostream>
using namespace std;

int main(void) {

	int money = 0;
	int candy = 0;
	int get_candy = 0;
	int change = 0;

	cout << "가지고 있는 돈 입력 : ";
	cin >> money;
	cout << "현재 캔디 물가 입력 : ";
	cin >> candy;
	cout << endl;

	get_candy = money / candy;
	change = money % candy;

	cout << "현재 가지고 있는 돈 : " << money << endl;
	cout << "캔디의 가격 : " << candy << endl;
	cout << "최대로 살 수 있는 캔디의 갯수 = " << get_candy << endl;
	cout << "캔디 구입 후 남은 돈 = " << change << endl;

	return 0;
}