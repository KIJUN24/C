// 두 정수 A와 B를 입력받은 다음, AxB를 출력하는 프로그램을 작성하시오.
// 입력 : 첫째 줄에 A와 B가 주어진다.(0<A, B<10)
// 출력 : 첫째 줄에 AxB를 출력한다.

#include<iostream>
using namespace std;

int main(void)
{
    int a = 0, b = 0, c = 0;
    cin >> a >> b;
    c = a * b;
    cout << c << endl;

    return 0;
}