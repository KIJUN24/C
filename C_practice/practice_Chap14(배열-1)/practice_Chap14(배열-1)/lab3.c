/*
	문제3
	정수형 배여 ㄹ5개의 방을 가지는 배열을 만들어 0으로 초기화를 한다.
	그리고, 사용자로부터 5명의 학생의 성적을 입력받고
	성적 분석을 하는데 5명 성적 중 1등의 성적과 5등의 성적 그리고 총합과 평균을 구하는 프로그램을 작성하시오.

	출력결과
	5명의 성적을 입력하세요.
	1번째 점수 : 100
	2번째 점수 : 75
	3번째 점수 : 56
	4번째 점수 : 10
	5번째 점수 : 48
	=============================
	5명의 성적 저장 배열값으로 출력
	=============================
	score[0] = 100
	score[1] = 75
	score[2] = 56
	score[3] = 10
	score[4] = 48
	=============================
	성적 분석
	=============================
	1등 점수 : 100점
	5등 점수 : 10점
	합계 : 289
	평균 : 57.80
	=============================
*/

#include<stdio.h>
#define LENGTH 5

int main(void)
{
	int score[LENGTH] = { 0 };
	int max = 0, min = 0, sum = 0;
	double avg = 0.0;
	int i = 0;

	printf("5명의 성적을 입력하세요.\n");

	for (i = 0; i < sizeof(score) / sizeof(int); i++)
	{
		printf("%d번째 점수 : ", i+1);
		scanf_s("%d", &score[i]);
		sum += score[i];
	}
	
	printf("==============================\n");
	printf("5명의 성적 저장 배열값으로 출력\n");
	printf("==============================\n");

	for (i = 0; i < sizeof(score) / sizeof(int); i++)
	{
		printf("score[%d] = %d\n", i, score[i]);
	}

	printf("==============================\n");
	printf("성적 분석\n");
	printf("==============================\n");

	/*if (score[0] > score[1] && score[0] > score[2] && score[0] > score[3] && score[0] > score[4])
	{
		printf("1등 점수 : %d", score[0]);
	}
	if (score[1] > score[0] && score[1] > score[2] && score[1] > score[3] && score[0] > score[4])
	{
		printf("1등 점수 : %d", score[1]);
	}
	if (score[2] > score[0] && score[2] > score[1] && score[2] > score[3] && score[2] > score[4])
	{
		printf("1등 점수 : %d", score[2]);
	}
	if (score[3] > score[0] && score[3] > score[1] && score[3] > score[2] && score[3] > score[4])
	{
		printf("1등 점수 : %d", score[3]);
	}
	if (score[4] > score[0] && score[4] > score[1] && score[4] > score[2] && score[4] > score[3])
	{
		printf("1등 점수 : %d", score[4]);
	}
	printf("\n");
	if (score[0] < score[1] && score[0] < score[2] && score[0] < score[3] && score[0] < score[4])
	{
		printf("5등 점수 : %d", score[0]);
	}
	if (score[1] < score[0] && score[1] < score[2] && score[1] < score[3] && score[0] < score[4])
	{
		printf("5등 점수 : %d", score[1]);
	}
	if (score[2] < score[0] && score[2] < score[1] && score[2] < score[3] && score[2] < score[4])
	{
		printf("5등 점수 : %d", score[2]);
	}
	if (score[3] < score[0] && score[3] < score[1] && score[3] < score[2] && score[3] < score[4])
	{
		printf("5등 점수 : %d", score[3]);
	}
	if (score[4] < score[0] && score[4] < score[1] && score[4] < score[2] && score[4] < score[3])
	{
		printf("5등 점수 : %d", score[4]);
	}*/

	// 성적 값을 비교하기 위해서 초기값을 score[0]으로 대입한다.
	max = score[0];
	min = score[0];

	for (i = 0; i < LENGTH; i++)
	{
		// 점수의 최댓값을 구하는 코드
		if (max < score[i])
		{
			max = score[i];
		}
		// 점수의 최솟값을 구하는 코드
		if (min > score[i])
		{
			min = score[i];
		}
	}

	printf("1등 점수 : %d\n", max);
	printf("5등 점수 : %d\n", min);
	printf("합계 : %d\n", sum);
	
	avg = (double)sum / LENGTH;
	printf("평균 : %.2lf", avg);

	return 0;
}