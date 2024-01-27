/*
	int main(void)
	{
		int num1=5;
		int *ptr1=&num1;
		int num2=10;
		int *ptr2=&num2;

		...

	}
	위의 코드를 보면 ptr1과 ptr2가 각각 num1과 num2를 가리키고 있다.
	이 때 ptr1과 ptr2를 대상으로 다음과 같이 함수를 호출하고 나면,
	SwapPointer(ptr1, ptr2);
	ptr1과 ptr2가 가리키는 대상이 서로 바뀌도록 SwapPointer 함수를 정의해 보자.
*/

//#include<iostream>
//using namespace std;
//
//void SwapPointer(int& ptr1, int& ptr2);
//
//int main(void)
//{
//	int num1 = 5;
//	int* ptr1 = &num1;
//	int num2 = 10;
//	int* ptr2 = &num2;
//
//	cout << "[함수 실행 전]" << endl;
//	cout << "ptr1이 가리키는 대상 : " << *ptr1 << endl;
//	cout << "ptr2가 가리키는 대상 : " << *ptr2 << endl;
//	cout << endl;
//	cout << "ptr1이 가리키는 주소값 : " << ptr1 << endl;
//	cout << "ptr2가 가리키는 주소값 : " << ptr2 << endl;
//
//	cout << endl;
//	cout << "[함수 실행 후]" << endl;
//
//	SwapPointer(num1, num2);
//	cout << "ptr1이 가리키는 대상 : " << *ptr1 << endl;
//	cout << "ptr2가 가리키는 대상 : " << *ptr2 << endl;
//	cout << endl;
//	cout << "ptr1이 가리키는 주소값 : " << ptr1 << endl;
//	cout << "ptr2가 가리키는 주소값 : " << ptr2 << endl;
//
//	return 0;
//}
//
//void SwapPointer(int& ptr1, int& ptr2)
//{
//	int temp = ptr1;
//	ptr1 = ptr2;
//	ptr2 = temp;
//	return;
//}

// 답


#include<iostream>
using namespace std;

void SwapPointer(int* (&pref1), int* (&pref2))
{
	int* ptr = pref1;
	pref1 = pref2;
	pref2 = ptr;
}

int main(void)
{
	int num1 = 5;
	int* ptr1 = &num1;

	int num2 = 10;
	int* ptr2 = &num2;

	cout << *ptr1 << endl;
	cout << *ptr2 << endl;

	SwapPointer(ptr1, ptr2);

	cout << *ptr1 << endl;
	cout << *ptr2 << endl;

	return 0;
}