#include<iostream>
using namespace std;

int Adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}

int main(void) 
{
	cout << Adder() << endl;
	cout << Adder(5) << endl;
	cout << Adder(3, 5) << endl;

	return 0;
}

// 전달되는 인자는 왼쪽에서부터 채워져 나가고, 부족분은 디폴트 값으로 채워진다.