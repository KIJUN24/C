/*
실행결과
국어 : 70, 영어 : 80, 수학 : 90
총점 : 240
*/


#include <stdio.h>

int main(void)
{
    int kor, eng, mat;
    int total;
   
    kor = 70;
	eng = 80;
	mat = 90;
    total = kor + eng + mat;

    printf("국어 : %d, 영어 : %d, 수학 : %d\n", kor, eng, mat);
    printf("총점 : %d", total);

    return 0;
}