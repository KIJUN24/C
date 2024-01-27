/*
	문제1
	참조자를 이용해서 다음 요구사항에 부합하는 함수를 각각 정의하여라
		1) 인자로 전달된 int형 변수의 값을 1씩 증가시키는 함수
		2) 인자로 전달된 int형 변수의 부호를 바꾸는 함수
	그리고 위의 각 함수를 호출하여 그 결과를 확인하는 main함수까지 작성해라
*/

#include<iostream>
using namespace std;

void plus_num(int& num);
void change_sign(int& num);

int main(void)
{
	int num_change = 0, num_plus = 0;

	cout << "정수를 입력해주세요 : ";
	cin >> num_change;

	plus_num(num_change);
	cout << "1증가 값 : " << num_change << endl;
	
	cout << endl;

	cout << "0이 아닌 정수를 입력해주세요 : ";
	cin >> num_plus;

	change_sign(num_plus);
	cout << "부호 변경된 값 : " << num_plus << endl;

	return 0;
}

void plus_num(int& num)
{
	num += 1;
	return;
}

void change_sign(int& num)
{
	num *= (-1);
	return;
}