#include<iostream>
using namespace std;

namespace AAA
{
	namespace BBB
	{
		namespace CCC
		{
			int num1;
			int num2;
		}
	}
}

int main(void)
{
	AAA::BBB::CCC::num1 = 20;
	AAA::BBB::CCC::num2 = 40;

	namespace ABC = AAA::BBB::CCC;
	// ABC라는 별칭을 붙여주고 있다.

	cout << ABC::num1 << endl;
	cout << ABC::num2 << endl;

	return 0;
}