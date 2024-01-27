/*
	배열에 대한 실습-7
	배열을 활용하여 자동차 예약 프로그램 작성하기
*/

#include<stdio.h>
#define CAR 10					// 매크로 상수 선언

int main(void)
{
	char yn = ' ';				// 시작과 종료 문자 변수
	int choice = 0, cnt = 0;	// 자동차 모델 번호 선택과 카운트 변수
	int car[CAR] = { 0 };		// 배열 요소 값을 모두 0으로 초기화

	do {
		printf("자동차 모델을 선택하시겠습니까? ( Y / N ) : ");

		// 버퍼 비우기 1번째 방법
		/*scanf_s("%c", &yn, sizeof(char));
		getchar();*/	//getchar() : 버퍼 비우는 함수

		// 버퍼 비우기 2번째 방법 : 형식 지정자 앞에 빈 공백을 하나 주면 getchar()의 역할을 한다.
		scanf_s(" %c", &yn, sizeof(char));

		// 무한 루프 탈출 코드
		if (yn == 'N' || yn == 'n')				// 모델의 선택을 원하지 않는다며 루프를 빠져나간다.
		{
			break;
		}
		else if (yn == 'Y' || yn == 'y')		// 모델을 선택한다면...
		{
			printf("자동차 모델 번호 : 1 2 3 4 5 6 7 8 9 10\n");
			printf("자동차 예약 현황 : ");
			// 자동차 예약 현황을 출력하는 코드
			for (cnt = 0; cnt < CAR; cnt++)
			{
				printf("%2d", car[cnt]);
			}
			printf("\n");

		re_input:
			printf("\n자동차 모델 선택(1 ~ 10) : ");
			scanf_s(" %d", &choice);
			// 모델 오입력 에러 처리 코드
			if (choice < 1 || choice>10)
			{
				printf("모델 번호는 1 ~ 10까지 입니다. 잘못 입력하셨습니다.\n");
				printf("모델 번호를 다시 입력해주세요\n");
				goto re_input;
			}
			else	// 정상적으로 모델 번호를 입력했다면...
			{
				if (car[choice - 1] == 0)	// 선택한 자동차 모델이 아직 예약이 안 되어 있는 상태
				{
					car[choice - 1] = 1;	// 예약이 확정됨.
					printf("%d번 모델 예약 완료됨\n", choice);
				}
				else if (car[choice - 1] == 1)	// 이미 예약된 경우에는 에러 처리 코드
				{
					printf("[No.%d] 모델은 이미 예약이 완료되었습니다.\n", choice);
					printf("모델 번호를 다시 입력해주세요\n");
					goto re_input;
				}
			}
		}
		else		// Y, N 둘 중에 입력이 되지 않고 다른 값이 입력되었다면 에러 처리를 할 코드
		{
			printf("오류 발생\n");
			printf("Y나 N값을 대소문자 구별없이 입력하셔야 합니다.\n");
			printf("다시 입력해주세요\n");		
		}

	} while (1);

	printf("최종 예약 현황 출력!\n");
	printf("자동차 모델 번호 : 1 2 3 4 5 6 7 8 9 10\n");
	printf("자동차 예약 현황 : ");
	for (cnt = 0; cnt < CAR; cnt++)
	{
		printf("%2d", car[cnt]);
	}
	printf("\n\n");
	printf("프로그램을 종료합니다.\n");

	return 0;
}

// 퀴즈
// 위의 내용을 함수별로 나누어서 메인함수에는 호출만 해서 출력이 되도록 프로그램을 수정하시오.