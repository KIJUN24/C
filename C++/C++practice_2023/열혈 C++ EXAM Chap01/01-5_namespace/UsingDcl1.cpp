#include<iostream>
using namespace std;

namespace Hybrid
{
	void HybFunc(void)
	{
		cout << "So simple Function!" << endl;
		cout << "In namespace Hybrid!" << endl;
	}
}

int main(void)
{
	using Hybrid::HybFunc;
	// using키워드를 이용해 '이름공간(namespace) Hybrid에 정의된 HybFunc를
	// 호출할 떄에는, 이름공간을 지정하지 않고 호출하겠다.'라는 것을 명시(선언)하고 있다.
	// 지역변수 선언과 동일한 효력을 갖는다.
	// 프로그램 전체영역에 효력을 미치게 하려면 전역변수와 마찬가지로 함수 밖에 선언을 해야 한다.

	HybFunc();
	// using선언을 통해 이름공간의 지정 없이 HybFunc함수를 호출하고 있다.
	return 0;
}