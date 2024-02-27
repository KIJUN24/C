#include <stdio.h>

struct GameInfo {
	const char* name;
	int year;
	int price;
	const char* company;

	struct GameInfo* friendGame; // 연관 업체 게임
};

typedef struct GameInformation {
	const char* name;
	int year;
	int price;
	const char* company;

	struct GameInfo* friendGame; // 연관 업체 게임
} GAME_INFO;

int main(void)
{
	// 게임 출시
	// 이름 : ~게임
	// 발매년도 : 2022
	// 가격 : 100원
	// 제작사 : L컴퍼니

	const char* name = "~게임";
	int year = 2022;
	int price = 100;
	const char* company = "L_Company";

	// 또 다른 게임 출시
	// 이름 : !!게임
	// 발매년도 : 2023
	// 가격 : 150원
	// 제작사 : J컴퍼니

	const char* name2 = "!!게임";
	int year2 = 2023;
	int price2 = 150;
	const char* company2 = "J_Company";

	// 구조체 사용
	struct GameInfo gameInfo1;
	//struct GameInfo gameInfo2;

	gameInfo1.name = "~게임";
	gameInfo1.year = 2022;
	gameInfo1.price = 100;
	gameInfo1.company = "L_Company";


	// 구조체를 배열처럼 초기화
	struct GameInfo gameInfo2 = { "!!게임", 2023, 150, "J_Company" };

	// typedef
	// 자료형에 별명 지정
	int i = 1;
	typedef int 정수;
	typedef float 실수;
	정수 정수변수 = 3; // int i =3;
	실수 실수변수 = 3.23f; // float f = 3.23f;
	printf("정수변수 : %d\n", 정수변수);
	printf("실수변수 : %.3f\n", 실수변수);

	typedef struct GameInfo 게임정보;
	게임정보 game1;
	game1.name = "한글게임";
	game1.year = 2020;


	GAME_INFO game2;
	game2.name = "한글게임2";
	game2.year = 2000;


	struct GameInformation game3;
	game3.name = "한글게임3";
	game3.year = 2024;


	return 0;
}