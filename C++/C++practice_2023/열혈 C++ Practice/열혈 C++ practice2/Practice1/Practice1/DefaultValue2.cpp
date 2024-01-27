#include<iostream>
using namespace std;

int Adder(int num1 = 1, int num2 = 2);

int main(void)
{
	cout << Adder() << endl;
	cout << Adder(5) << endl;
	cout << Adder(3, 5) << endl;

	return 0;
}

int Adder(int num1, int num2)
{
	return num1 + num2;
}


// 함수의 선언이 별도로 필요한 경우에는 매개변수의 디폴트 값은 함수의 선언부분에만 위치시켜야 한다.