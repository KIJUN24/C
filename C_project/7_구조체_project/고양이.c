/*
5마리의 고양이가 있다
아무 키나 눌러서 랜덤으로 고양이를 뽑되,
5마리 보두 다 수집을 하면 게임 종료

중복 발생 가능

고양이
이름, 나이, 성격, 키우는 난이도 (레벨)
*/

#include <stdio.h>
#include <time.h>
#include <random>


typedef struct {
	const char* name;		// 이름
	int age;				// 나이
	const char* character;	// 성격
	int level;				// 키우기 난이도 (1~5 5가 어려움)
} CAT;

// 현재까지 보유한 고양이
int collection[5] = { 0,0,0,0,0 };

// 전체 고양이 리스트
CAT cats[5];


void initCats(); // 고양이 정보 초기화
void printCat(int selected);
int checkCollection();

int main(void)
{
	srand(time(NULL));

	initCats(); // 고양이 정보 초기화
	while (1)
	{
		printf("두근두근 어느 고양이의 집사가 될까요??\n엔터 키나 눌러서 확인하세요!!");
		getchar();

		int selected = rand() % 5;  // 0~4 사이의 숫자 반환
		printCat(selected);			// 고양이 정보 출력
		collection[selected] = 1;	// 고양이 뽑기 처리

		int collectALL = checkCollection();
		if (collectALL == 1)
		{
			break;
		}

	}


	return 0;
}

void initCats()
{
	cats[0].name = "개냥이";
	cats[0].age = 5;
	cats[0].character = "온순";
	cats[0].level = 1;

	cats[1].name = "루랑이";
	cats[1].age = 3;
	cats[1].character = "날카롭";
	cats[1].level = 3;

	cats[2].name = "뚱냥이";
	cats[2].age = 2;
	cats[2].character = "많이 먹음";
	cats[2].level = 5;

	cats[3].name = "까꿍이";
	cats[3].age = 2;
	cats[3].character = "시끄러움";
	cats[3].level = 4;

	cats[4].name = "잠만이";
	cats[4].age = 1;
	cats[4].character = "늘 잠만 잠";
	cats[4].level = 2;

}

void printCat(int selected)
{
	printf("\n\n=== 당신은 이 고양이 집사가 되었어요!! ===\n\n");
	printf(" 이름         : %s\n", cats[selected].name);
	printf(" 나이         : %d\n", cats[selected].age);
	printf(" 특징(성격)   : %s\n", cats[selected].character);
	printf(" 레벨(난이도) : ", cats[selected].level);


	for (int i = 0; i < cats[selected].level; i++)
	{
		printf("%s", "★");
	}
	printf("\n\n");
}

int checkCollection()
{
	// 현재 보유한 고양이 목록도 출력, 다 모았는지 여부를 반환
	int collectAll = 1;

	printf("\n\n=== 보유한 고양이 목록이에요 ===\n\n");
	for (int i = 0; i < 5;i++)
	{
		if (collection[i] == 0)	// 고양이 수집 X
		{
			printf("%10s", "(빈 박스)");
			collectAll = 0; // 다 모으지 못한 상태
		}
		else // 고양이 수집 O
		{
			printf("%10s", cats[i].name);
		}
	}
	printf("\n======================================\n\n");

	if (collectAll) // 고양이를 다 모은 상태
	{
		printf("\n\n 축하합니다. 모든 고양이를 다 모았어요. 열심히 키우세요.\n");
	}

	return collectAll;
}