/*
	종합 실습 예제-2
	화씨 온도를 섭씨 온도로 바뀌기
	섭씨 온도 = 5/9(화씨온도 - 32)  -> 공식
	화씨 온도는 사용자한테 입력 받도록 한다.

	출력결과
	화씨온도 60도는 섭씨온도 15.5556입니다.
*/

#include<iostream>
using namespace std;

int main(void) {

	int ft = 0;
	double ct = 0.0;

	cout << "화씨온도를 입력해주세요 : ";
	cin >> ft;
	
	const double i = 5.0 / 9.0;
	ct = i * (ft - 32);

	cout << "화씨온도 " << ft << "는 섭씨온도 " << ct << "입니다." << endl;

	return 0;
}