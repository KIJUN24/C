#include<iostream>
using namespace std;

namespace BestComImpl
{
	void SimpleFunc(void);
}

namespace ProgComImpl
{
	void SimpleFunc(void);
}

int main(void)
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}

void BestComImpl::SimpleFunc(void)
// 이름공간(namespace) BestComImpl에 선언된 함수 SimpleFunc의 정의부분.
{
	cout << "BestCom이 정의한 함수" << endl;
}

void ProgComImpl::SimpleFunc(void)
{
	cout << "ProgCom이 정의한 함수" << endl;
}