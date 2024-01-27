/*
	page22 문제01
	사용자로부터 총 5개의 정수를 입력 받아서,
	그 합을 출력하는 프로그램을 작성해보자.
	단, 프로그램은 다음과 같이 이뤄져야 한다.

	실행결과
	1번째 정수 입력: 1
	2번째 정수 입력: 2
	3번째 정수 입력: 3
	4번째 정수 입력: 4
	5번째 정수 입력: 5
	합계: 15
*/

#include<iostream>
using namespace std;

int main(void) {

	int input_num = 0, sum = 0;

	for (int i = 1; i <= 5; i++) {
		cout << i << "번째 정수 입력: ";
		cin >> input_num;
		sum += input_num;
	}
	cout << endl;

	cout << "합계: " << sum << endl;

	return 0;
}