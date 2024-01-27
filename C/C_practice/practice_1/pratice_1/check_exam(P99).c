#include <stdio.h>

int main(void)
{
    int kor = 3, eng = 5, math = 4;
    int credits, res;
    double ks = 3.8, es = 4.4, ms = 3.9;
    double grade;

    credits = kor + eng + math;
    grade = (ks + es + ms) / 3.0;

    res = (credits >= 10) && (grade > 4.0);
    
    printf("%d", res);

    return 0;
}