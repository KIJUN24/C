/*
	page22 문제02
	프로그램을 사용자로부터 이름과 전화번호를 문자열의 형태로 입력 받아서,
	입력 받은 데이터를 그래도 출력하는 프로그램을 작성해 보자.
*/

#include<iostream>
#include<string>
using namespace std;

int main(void) {

	string name = { 0 };
	string ph = { 0 };

	cout << "이름 : ";
	cin >> name;
	cout << "전화번호 : ";
	cin >> ph;

	cout << "이름 : " << name << endl;
	cout << "전화번호 : " << ph << endl;

	return 0;
}