#include<stdio.h>

double add(int x, int y) {
	double result = 0;

	result = (double)x + y;

	return result;
}


double sub(int x, int y) {
	double result = 0;

	result = (double)x - y;

	return result;
}


double mul(int x, int y) {
	double result = 0;

	result = (double)x * y;

	return result;
}


double div(int x, int y) {
	double result = 0;

	result = (double)x / y;

	return result;
}


int remain(int x, int y) {
	int result = 0;

	result = x % y;

	return result;
}