/*
	문제 3
	숫자를 하나 입력 받아서 그 숫자에 해당하는 구구단을 출력하는 프로그램을 작성해보자.
	예를 들어 사용자가 5를 입력한다면 구구단에서 5단을 출력해야 한다.
*/

#include<iostream>
using namespace std;

int main(void) {

	int dan = 0, result = 0;

	cout << "몇 단을 출력해드릴까요? ";
	cin >> dan;
	cout << endl;

	for (int i = 1; i < 10; i++) {
		result = dan * i;
		cout << dan << " X " << i << " = " << result << endl;
	}

	return 0;
}