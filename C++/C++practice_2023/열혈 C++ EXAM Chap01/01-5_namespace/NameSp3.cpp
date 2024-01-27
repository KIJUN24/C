#include<iostream>
using namespace std;

namespace BestComImpl
{
	void SimpleFunc(void);
}

namespace BestComImpl
{
	void PrettyFunc(void);
}

namespace ProgComImle
{
	void SimpleFunc(void);
}

int main(void)
{
	BestComImpl::SimpleFunc();
	return 0;
}

void BestComImpl::SimpleFunc(void)
{
	cout << "BestCom이 정의한 함수" << endl;
	PrettyFunc();
	ProgComImle::SimpleFunc();
}

void BestComImpl::PrettyFunc(void)
{
	cout << "So Pretty!!" << endl;
}

void ProgComImle::SimpleFunc(void)
{
	cout << "ProgCom이 정의한 함수" << endl;
}