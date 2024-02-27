#include<stdio.h>
#include<math.h>

int get_integer(void) {

	int num = 0;

	scanf_s("%d", &num);

	return num;
}


int power(int x, int y) {

	int result = 0;

	result = pow(x, y);

	return result;
}