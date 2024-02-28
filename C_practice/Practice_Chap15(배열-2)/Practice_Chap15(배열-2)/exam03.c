/*
	배열과 함수에 대한 실습-1
	배열명을 인수로 하여 사용자 정의 함수를 호출한다는 것은
	배열명이 주소값이므로 주소 자체를 넘기는 것이다.
	호출하는 쪽에서 

	함수명(배열명); 

	이러한 형태로 호출하면 되고,
	사용자 정의 함수에서는 함수명이 hap이라고 가정한다면
	선언할 때는 

	반환값 함수형(데이터 타입 배열명[]) {} 

	이러한 형태로 해야 한다.
*/
// call by reference의 개념과 동일하다.


#include<stdio.h>
#define LENGTH 5

// 함수의 선언
int hap(int score[], int size);
int point_hap(int* score, int size);


int main(void)
{
	// 배열의 선언과 동시에 초기화
	int score[LENGTH] = { 100, 50, 30, 20, 90 };
	int sum = 0;
	float avg = 0.0f;

	printf("상수 > #define LENGTH 5\n");
	printf("배열 > score[LENGTH] = { 100, 50, 30, 20, 90 }\n");

	//sum = hap(score, LENGTH);		// 사용자 정의 함수 호출(배열명), 주소를 인수값으로 취하고 있다.
	sum = point_hap(score, LENGTH); // 사용자 정의 함수 호출(포인터), 주소를 인수값으로 취하고 있다.

	// 평균 구하기
	avg = (float)sum / LENGTH;		// float로 타입 캐스팅

	printf("반환 > 배열에 저장되어 있는 5과목의 총점 : %d\n", sum);
	printf("산출 > 배열에 저장되어 있는 5과목의 평균 : %.2f\n", avg);

	printf("호출한 곳에 영향 > score[3]의 값 : %d\n", score[3]);
	// call by referecne : 주소값을 넘겼으므로 score[3]의 값이 바뀌었다.


	return 0;
}


// 사용자 정의 함수 구현(배열의 총점을 구하는 기능)
int hap(int score[], int size)		// 매개변수로 배열명 즉 주소가 넘어오고 있다.
{
	int i = 0, total = 0;
	printf("\n사용자 정의 함수 hap을 통하여 총점 계산 후 반환\n");

	// 총점 계산 코드
	for (i = 0; i < size; i++)
	{
		total += score[i];		// 배열 값 누적
	}

	score[3] = 80;	// 주소를 알고 있기에 호출한 곳에 영향을 끼치는 것이다.

	return total;
}


// 사용자 정의 함수 구현(배열의 총점을 구하는 기능)_Version2
int point_hap(int* score, int size)		// 포인터 변수에 배열의 주소값(포인터 상수)이 저장
{
	int i = 0, total = 0;
	printf("\n사용자 정의 함수 point_hap을 통하여 포인터를 활용하여 총점 계산 후 반환\n");


	// 값을 바꾸고 싶다면 포인터가 이동하기 전 바꿔줘야 한다.
	score[3] = 80;


	// 총점 계산 코드
	for (i = 0; i < size; i++)
	{
		total += *score;		// 변수값을 포인터 간접 참조를 통해 실제값을 나타내고 싶을 때 '*'를 사용한다.
		// *score는 실제 값을 의미(간접 참조), score는 주소
		score++;	// 포인터의 위치를 이동시킨다.(int이니 4바이트씩 움직인다.)
	}
	score[3] = 80;	// for문에서 포인터가 이동했기 때문에 값이 안 나온다.
	return total;
}