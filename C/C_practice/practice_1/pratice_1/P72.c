/*
������
���� : 70, ���� : 80, ���� : 90
���� : 240
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

    printf("���� : %d, ���� : %d, ���� : %d\n", kor, eng, mat);
    printf("���� : %d", total);

    return 0;
}