#include<iostream>
using namespace std;

int BoxVolume(int length, int width = 1, int heignt = 1);

int main(void) 
{
	cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << endl;
	cout << "[5, 5, D] : " << BoxVolume(5, 5) << endl;
	cout << "[7, D, D] : " << BoxVolume(7) << endl;
	//cout << "[D, D, D] : " << BoxVolume() << endl;

	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length * width * height;
}

// 오른쪽 매개변수의 디폴트 값부터 채우는 형태로 정의해야 한다.
// ()안에 넣는 수가 왼쪽부터 전달되기 때문이다.