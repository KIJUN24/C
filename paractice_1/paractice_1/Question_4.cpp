#include<iostream>

int main(void)
{
	int sell=0, salary = 50;

	while(1)
	{
		std::cout<<"판매 금액을 만원 단위로 입력(-1 to end) : ";
		std::cin>>sell;
		if(sell == -1)
		{
			std::cout<<"프로그램을 종료합니다.\n";
			return -1;
		}
		salary += sell*0.12;
		std::cout<<"이번 달 급여 : "<<salary<<std::endl;
		salary = 50;
	}
	return 0;
}