/*
	:: 연산자 = 범위지정 연산자(scope resolution operator)
				이름공간을 지정할 때 사용하는 연산자.
*/

#include<iostream>

using namespace std;

namespace BestComImpl
{
	void SimpleFunc(void)
	{
		cout << "BestCom이 정의한 함수" << endl;
	}
}

namespace ProgComImpl
{
	void SimpleFunc(void)
	{
		cout << "ProgCom이 정의한 함수" << endl;
	}
}

int main(void)
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}