/*
	문제 2
	다음 내용에 맞는 프로그램을 작성하시오.
	변수 3개를 선언 및 초기화 : int형 변수 2개, 포인터형 변수 1개 선언
	키보드로 점수를 입력받는다.
	입력한 점수의 유효범위(0~100)는 if-else문으로 판별한다.
	입력한 점수에 대해 switch문을 사용하여 등급을 출력하라.

	 등급              점수구간                    비고
	A+ 학점     95점 이상 100점 이하     switch 문으로 A+ 등급 판별
	A0 학점     90점 이상  95점 미만     switch 문으로 A+ 등급 판별
	B+ 학점     85점 이상  90점 미만     switch 문으로 A+ 등급 판별
	B0 학점     80점 이상  85점 미만     switch 문으로 A+ 등급 판별
	C+ 학점     75점 이상  80점 미만     switch 문으로 A+ 등급 판별
	C0 학점     70점 이상  75점 미만     switch 문으로 A+ 등급 판별
	D+ 학점     65점 이상  70점 미만     switch 문으로 A+ 등급 판별
	D0 학점     60점 이상  65점 미만     switch 문으로 A+ 등급 판별
	F  학점      0점 이상  60점 미만     switch 문으로 A+ 등급 판별
*/

#include<stdio.h>

int main(void) {
	int jumsu = 0;
	char* grade = NULL;

	printf("점수를 입력하세요 : ");
	scanf_s("%d", &jumsu);

	if (jumsu > 100 || jumsu < 0)
	{
		printf("허용범위 숫자(0~100)를 입력해주세요.\n");
		printf("프로그램을 다시 실행하세요.\n");
	}
	
	int jumsu_div = 0;
	jumsu_div = jumsu / 5;

	switch (jumsu_div)
	{
		case 20:
		case 19:
			grade = "A+";
			break;
		case 18:
			grade = "A0";
			break;
		case 17:
			grade = "B+";
			break;
		case 16:
			grade = "B0";
			break;
		case 15:
			grade = "C+";
			break;
		case 14:
			grade = "C0";
			break;
		case 13:
			grade = "D+";
			break;
		case 12:
			grade = "D0";
			break;
		default:
			grade = "F";
			break;
	}
	printf("입력한 점수 : %d\n", jumsu);
	printf("등급 : %s", grade);

	return 0;
}