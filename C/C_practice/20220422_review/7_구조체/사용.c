#include <stdio.h>

struct GameInfo {
	const char* name;
	int year;
	int price;
	const char* company;
};

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

	// 구조체 출력
	printf("-- 게임 출시 정보 --\n");
	printf("   게임명   : %s\n", gameInfo1.name);
	printf("   발매년도 : %d\n", gameInfo1.year);
	printf("   가격     : %d\n", gameInfo1.price);
	printf("   제작사   : %s\n", gameInfo1.company);
	printf("\n");


	// 구조체를 배열처럼 초기화
	struct GameInfo gameInfo2 = {"!!게임", 2023, 150, "J_Company"};
	printf("-- 또 다른 게임 출시 정보 --\n");
	printf("   게임명   : %s\n", gameInfo2.name);
	printf("   발매년도 : %d\n", gameInfo2.year);
	printf("   가격     : %d\n", gameInfo2.price);
	printf("   제작사   : %s\n", gameInfo2.company);

	return 0;
}