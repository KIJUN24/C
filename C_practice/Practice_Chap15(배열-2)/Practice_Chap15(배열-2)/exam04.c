/*
	배열과 함수에 대한 실습-2
	배열명으로 함수를 호출하면 주소값이 전달되지만,
	배열요소를 인수로 전달하면 복사된 배열요소(실제값, 변수와 동일)가 전달되기 떄문에 호출한 곳에 아무런 영향을 끼치지 아니한다.
	배열 요소를 함수를 호출할 때 인수 값으로 한다는 것은 바로 call by value(값에 의한 호출)에 해당한다.
*/

#include<stdio.h>
#define LENGTH 5

int power(int num);		// 함수 power() 선언


int main(void)
{
	int score[LENGTH] = { 0 };		// 배열 선언과 초기화
	int result = 0;
	int i = 0;

	// 사용자로부터 입력받는 코드
	printf("배열 요소를 입력해주세요.\n");
	for (i = 0; i < LENGTH; i++)
	{
		printf("score[%d] : ", i);
		scanf_s(" %d", &score[i]);		// 배열요소는 변수명과 동일하므로 주소참조연산자 &를 필히 붙여줘야 한다.
	}

	printf("\n입력받은 배열의 요소를 출력\n");
	for (i = 0; i < LENGTH; i++)
	{
		printf("score[%d] : %d\n", i, score[i]);
	}
	printf("\n");
	printf("함수 호출 > score[3]의 값을 전달(복사) : %d\n", score[3]);

	// 함수 호출하는데 배열 요소를 인수값으로 전달하고 있다.(실제값을 전달하면 call by value)
	result = power(score[3]);

	printf("\nmain함수로 복귀\n");
	printf("반환 > power(score[3]) 호출 결과 반환 값 : %d\n", result);
	printf("배열의 값 영향 확인 > score[3] 저장된 값 : %d\n\n", score[3]);
	// call by value는 호출한 곳에 영향을 전혀 끼치지 않는다.


	return 0;
}



// 사용자 함수 구현
int power(int num)
{
	int power = 0;
	power = num * num;
	printf("\npower함수 영역\n");
	printf("산출 > score[3] 배열 요소의 제곱 : %d * %d = %d\n", num, num, power);
	num = 88;

	return 0;
}
