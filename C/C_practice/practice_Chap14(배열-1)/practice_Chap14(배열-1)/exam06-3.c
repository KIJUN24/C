/*
	배열에 대한 실습-6__사용자로부터 입력을 무한루프로 받기_단 방 개수는 지정해줘야 함.
	배열의 요소의 개수를 구하는 방법(공식)
	1. 배열의 요소 개수 = sizeof(배열명) / sizeof(배열명[0])
	2. 배열의 요소 개수 = sizeof(배열명) / sizeof(배열의 데이터 타입)
*/

// 배열의 요소의 개수를 구하는 실습

#include<stdio.h>
#define LENGTH 10

int main(void)
{

	int arr[LENGTH] = { 0 };
	int cnt = 0;
	int cnt1 = 0;
	int cnt2 = 0;
	int i = 0;
	int num = 0;

	printf("배열의 요소의 값을 입력하세요.(-1를 입력시 종료됨)\n");

	while (1)
	{
		printf("arr[%d]방의 값 입력 : ", i);
		scanf_s("%d", &num);

		// 무한루프 탈출코드
		if (num == -1)
		{
			printf("-1를 입력하셨습니다. 더 이상 숫자를 저장하지 않습니다.\n");
			break;
		}
		else
		{
			arr[i] = num;
			i++;
		}
	}

	printf("\n\n");

	// 1. 배열 요소의 개수 구하기
	cnt = sizeof(arr);
	cnt1 = sizeof(arr) / sizeof(arr[0]);
	printf("arr배열 요소의 개수 : %d\n", cnt1);

	// 1. 배열 요소의 개수 구하기
	cnt2 = sizeof(arr) / sizeof(int);
	printf("arr배열 요소의 개수 : %d\n", cnt2);

	printf("\n\n");

	printf("-1를 입력하기 전까지 저장되어진 배열 요소의 값을 출력합니다.\n");

	// 배열의 요소를 직접 출력해보기
	for (i = 0; i < cnt1; i++)
	{
		printf("arr[%d]의 값 : %2d \n", i, arr[i]);
	}

	return 0;
}

/*
	결론
	배열의 단점인 '정적이다.' 라는 것 때문에 배열의 방의 개수를 미리 정해둬야 한다.
	그런 이유로 입력시 배열의 크기보다 많게 입력을 하면 저장할 방이 없고,
	적게 입력하면 메모리 낭비를 초래한다.
*/