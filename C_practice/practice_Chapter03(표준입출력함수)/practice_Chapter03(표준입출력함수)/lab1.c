/* 
   문제1
   다음 내용에 맞는 프로그램을 작성하시오.
   조건
   국어, 영어, 수학 점수를 각각 키보드로 입력
   3과목의 총점과 평균 점수 출력
   출력시 전체 자릿수는 총점은 6자리, 평균은 7자리로 설정
   평균은 소수 둘째자리까지만 산출
   평균 산출시에는 3대신 3.0으로 나누기
   출력결과
   1. 국어 점수 : 88
   2. 영어 점수 : 99
   3. 수학 점수 : 88
   총 점 : 275
   평 균 : 91.67
   */

#include<stdio.h>
#include<stdlib.h>

int main(void) {

	system("title 평균 점수 계산하기");
	
	int kor = 0, eng = 0, mat = 0, total = 0;
	float eva = 0;

	printf("점수 입력하기 : ");
	scanf_s("%d %d %d", &kor, &eng, &mat);
	printf("1. 국어 점수 : %d\n", kor);
	printf("2. 영어 점수 : %d\n", eng);
	printf("3. 수학 점수 : %d\n", mat);

	total = kor + eng + mat;
	printf("총 점 : %d\n", total);

	eva = total / 3.0;

	printf("평 균 : %.2f", eva);

	return 0;
}