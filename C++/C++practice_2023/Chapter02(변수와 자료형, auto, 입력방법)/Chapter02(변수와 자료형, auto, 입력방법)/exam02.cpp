/*
	auto 키워드 : 자동변수라는 의미밖에 없었지만 C++11 auto의 의미가 바뀌었다.
	자료형을 생략할 때 사용할 수 있는 키워드로 auto이다.
	자동 타입 추론(automatic type deduction)
*/

#include<iostream>
#include<string>
using namespace std;

// 함수에서의 매개변수로는 auto를 사용할 수 없다.
auto add(int x, int y) {
	return x + y;
}


int main(void) {
	
	double d = 1.0;
	auto ad_1 = 1.8;	// 자동 타입 추론에 근거하여 대입되는 값에 따라서 자료형이 바뀌고 있다.
	auto ad_2 = 1;
	auto ad_3= 'z';
	auto ad_4 = "ad_4";


	cout << "변수 d의 바이트 : " << sizeof(d) << endl;
	cout << "변수 ad의 바이트 : " << sizeof(ad_1) << endl;
	cout << "변수 ad의 바이트 : " << sizeof(ad_2) << endl;
	cout << "변수 ad의 바이트 : " << sizeof(ad_3) << endl;
	cout << "변수 ad의 바이트 : " << sizeof(ad_4) << endl << endl;

	int result = 0;
	result = add(5, 6);

	cout << "add()함수 호출 : " << add(5, 6) << endl;
	cout << "add()함수 호출 : " << add(5, 6) << endl;
	cout << "add()함수의 바이트 값 : " << sizeof(result) << endl;


	return 0;


}