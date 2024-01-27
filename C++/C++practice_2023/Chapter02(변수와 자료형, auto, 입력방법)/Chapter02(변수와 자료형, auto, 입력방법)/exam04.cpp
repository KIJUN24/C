// 수식과 연산자 - 정수 정수, 정수 실수 계산  //  강제 캐스팅  //  %  //  증감연산자

#include<iostream>
using namespace std;

int main(void) {
	int x = 5;
	int y = 3;

	// 강제 캐스팅(명시적 형변환) - int의 값을 float형태로 x를 변경
	// 실수 / 정수 = 실수
	float result = (float)x / y;

	
	cout << x / y << endl;
	cout << result << endl << endl;


	// 나머지를 구하는 연산자 %
	// 홀, 짝, 배수 등 구할 떄 많이 사용된다.
	x = 10;
	y = 2;
	if (x % y == 0) {
		cout << "짝수입니다." << endl << endl;
	}
	else {
		cout << "홀수입니다." << endl << endl;
	}


	x = 12;
	y = 3;
	if (x % y == 0) {
		cout << "x는 3의 배수입니다." << endl << endl;
	}
	else {
		cout << "x는 3의 배수가 아닙니다." << endl << endl;
	}


	// 증감 연산자( ++ : 증가 연산자, -- : 감소 연산자 )
	int i = 10;

	// 후위 증가 연산자 : 후위 증가 연산자는 ; 명령을 실행한 후 값을 증가시킨다.
	cout << i++ << endl;  // 10
	cout << i << endl;    // 11

	// 전위 증가 연산자 : 전위 증가 연산자는 ; 명령을 실행하기 전에 선 증가시킨다.
	cout << ++i << endl;  // 12
	cout << i << endl;    // 12

	// 후위 감소 연산자 : 후위 증가 연산자는 ; 명령을 실행한 후 값을 감소시킨다.
	cout << i-- << endl;  // 12
	cout << i << endl;    // 11

	// 전위 감소 연산자 : 전위 증가 연산자는 ; 명령을 실행하기 전에 선 감소시킨다.
	cout << --i << endl;  // 10
	cout << i << endl;    // 10


	return 0;
}