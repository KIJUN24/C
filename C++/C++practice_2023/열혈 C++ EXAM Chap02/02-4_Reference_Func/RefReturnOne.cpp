#include<iostream>
using namespace std;

int& RefRetFuncOne(int& ref);

int main(void)
{
	int num1 = 1;
	int& num2 = RefRetFuncOne(num1);
	// 참조자는 참조자일 뿐, 그 자체로 변수는 아니기 때문에
	// 참조자가 참조하는 변수는 소멸되지 않는다.
	 
	
	//int num2 = RefRetFuncOne(num1);	// 결과가 3으로 나온다.

	num1++;
	num2++;

	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;

	return 0;
}

int& RefRetFuncOne(int& ref)
{
	ref++;
	return ref;

	// RefRetFuncOne이 반환을 하면 참조자 ref는 소멸된다.
	// ref는 지역변수와 동일한 성격이기 때문.
}