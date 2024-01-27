#include<iostream>
using namespace std;


void MyFunc(void) {
	cout << "MyFunc(void) called" << endl;
}

void MyFunc(char c) {
	cout << "myFunc(char c) called" << endl;
}

void MyFunc(int a, int b) {
	cout << "myFunc(int a, int b) called" << endl;
}

int main(void) {

	MyFunc();
	MyFunc('A');
	MyFunc(12, 14);

	return 0;
}