/* 
	실습 - 1
	변수 : 1) 변할 수 있는 값으로 프로그램에서 데이터를 저장하기 위한 메로리 공간을 의미.
		   2) 값을 저장하는 메모리 공간을 말한다. 
		      즉, 해당 데이터 타입에 크기만큼 스택이라는 메모리 공간 안에 할당을 받고 
			  할당받은 공간에 값을 바꾸어 가면서 변할 수 있는 값.
*/

#include<iostream>
#include<string>
using namespace std;

int main(void) {

	// 정상적인 변수 선언
	int age = 0;

	// 변수를 보편화 된 초기화 방법
	int i{ 100 };  // int i = 100;
	short b = 0;

	// 변수의 주소 확인
	cout << "변수 age의 주소 : "<< &age  << endl;
	cout << "변수 i의 주소 : " << &i << endl;
	cout << "변수 b의 주소 : " << &b << endl << endl;
	// 변수는 메모리 스택에 비 연속적으로 빈 공간을 찾아 들어간다.
	// &(엠퍼센트) : 주소 참조 연산자.


	// 자료형 크기(sizeof(데이터 타입, 변수명))
	// to_string(정수) : 정수값을 문자열 타입으로 변경시켜주는 string 헤더파일에 존재하는 메소드라고 보면 된다.
	cout << "char형 자료형의 바이트 크기 : " + to_string(sizeof(char)) + "바이트" << endl;
	cout << "short형 자료형의 바이트 크기 : " + to_string(sizeof(short)) + "바이트" << endl;
	cout << "int형 자료형의 바이트 크기 : " + to_string(sizeof(int)) + "바이트" << endl;
	cout << "long형 자료형의 바이트 크기 : " + to_string(sizeof(long)) + "바이트" << endl;
	cout << "long long형 자료형의 바이트 크기 : " + to_string(sizeof(long long)) + "바이트" << endl;
	cout << "float형 자료형의 바이트 크기 : " + to_string(sizeof(float)) + "바이트" << endl;
	cout << "double형 자료형의 바이트 크기 : " + to_string(sizeof(double)) + "바이트" << endl;
	cout << "long double형 자료형의 바이트 크기 : " + to_string(sizeof(long double)) + "바이트" << endl;
	cout << "bool형 자료형의 바이트 크기 : " + to_string(sizeof(bool)) + "바이트" << endl;

	return 0;
}