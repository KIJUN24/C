// inline() : 프로그램 코드라인 안으로 들어가 버린 함수

#include<iostream>
using namespace std;

// 템플릿 : 데이터의 손실 발생을 없애기 위해 사용.
// 자료형에 의존적이지 않아도 된다.
template <typename T>	
inline T SQUARE(T x)
{
	return x * x;
}

int main(void)
{
	cout << SQUARE(5) << endl;
	cout << SQUARE(12) << endl;
	cout << SQUARE(5.5) << endl;

	return 0;
}