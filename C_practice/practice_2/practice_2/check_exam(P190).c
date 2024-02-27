#include <stdio.h>

double average_self(double a, double b);

int main()
{
    double res;
	double a = 1.5;
	double b = 4.3;
    res = average_self(a, b);

    printf("%.1lf", res);

    return 0;
}

double average_self(double a, double b)
{
    double temp;
    temp = a + b;
    return temp;
}
