#include<iostream>

int main(void)
{
	int num;
	int result = 0;
	std::cout<<"´Ü ÀÔ·Â : ";
	std::cin>>num;

	for(int i=1; i<11; i++)
	{
		result = num * i;
		std::cout<<result<<std::endl;
	}

	

	return 0;
}