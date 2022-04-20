#include<iostream>

int main(void)
{
	char name[100];
	char phone[100];

	std::cout<<"이름 입력 : ";
	std::cin>>name;
	std::cout<<"이름 출력 : "<<name<<std::endl;

	std::cout<<"전화번호 입력 : ";
	std::cin>>phone;
	std::cout<<"전화번호 출력 : "<<phone<<std::endl;

	return 0;
}