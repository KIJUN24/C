#include<iostream>
#include<string>
using namespace std;


int main(void) {

	int i = 100;
	float f = 100.117f;

	cout << i << endl;
	cout << f << endl;

	cout << "정수 하나를 입력해주세요. : ";
	cin >> i;
	cout << "입력받은 정수값 : " << i << endl << endl;

	cout << "실수 하나를 입력해주세요. : ";
	cin >> f;
	cout << "입력받은 실수값 : " << f << endl << endl;


	string str = "";
	cout << "문자열을 입력해주세요. : ";
	cin >> str;
	cout << "입력받은 문자열 : " << str << endl << endl;

	return 0;
}