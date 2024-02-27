//#include<stdio.h>
//
//extern int ex_num1;
//extern int ex_num2;
//
//void add(void)
//{
//	int hap = 0;
//	hap = ex_num1 + ex_num2;
//	printf("연산결과 : %d\n", hap);
//	
//	return;
//}

int outter_function(int num1, int num2)
{
	int hap = 0;
	hap = num1 + num2;
	return hap;
}