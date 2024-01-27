#include <stdio.h>

// 구조체 생성
struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;
};

int main(void)
{
	// 게임 출시
	// 이름 : ~게임
	// 발매년도 : 2022
	// 가격 : 100원
	// 제작사 : L컴퍼니

	char* name = "~게임";
	int year = 2022;
	int price = 100;
	char* company = "L_Company";

	// 또 다른 게임 출시
	// 이름 : !!게임
	// 발매년도 : 2023
	// 가격 : 150원
	// 제작사 : J컴퍼니
	
	char* name2 = "!!게임";
	int year2 = 2023;
	int price2 = 150;
	char* company2 = "J_Company";
}