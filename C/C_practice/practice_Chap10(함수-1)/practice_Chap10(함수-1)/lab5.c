/*
	문제5 - 커피 자판기 프로그램 만들어 보기
	함수 1개 존재함 : int coffee_machine(char coffee, char guest);
	전역변수 : main() 외부에 존재하며, 아울러 프로그램 실행과 종료에 따라서 생성이 되거나 소멸이 같이 된다.
	프로그램의 라이프 사이클이랑 동일하다.
	로컬변수(지역변수) : 함수 내부에 존재하며, 반드시 초기화를 수행해줘야 한다.
	아울러 함수 종료가 될 때 소명이 이루어진다.

	출력결과
	몇 잔의 커피를 원하십니까? : 5
	A님 커피를 선택해주세요(1:라떼, 2:카푸치노, 3:아메리카노, 4:마끼야또) : 1
	A님 커피 나왔습니다.
	라떼입니다.

	B님 커피를 선택해주세요(1:라떼, 2:카푸치노, 3:아메리카노, 4:마끼야또) : 3
	B님 커피 나왔습니다.
	아메리카노입니다.
	
	...

	E님 커피를 선택해주세요(1:라떼, 2:카푸치노, 3:아메리카노, 4:마끼야또) : 5
	E님 주문 취소하셨습니다.
	처음부터 다시 시작해주세요.
*/

#include<stdio.h>

int coffe_machine(char coffee, char guest);

// 전역변수 선언 및 초기화
int coffee = 0;
char latte[6] = "라떼";
char capucino[12] = "카푸치노";
char americano[16] = "아메리카노";
char macchiato[12] = "마끼야또";
char guest = 'A';

int main(void) {

	int i = 0, cnt = 0, choice_num = 0;

	printf("몇 잔의 커피를 원하십니까?");
	scanf_s("%d", &cnt);
	getchar();

	for (i = 0; i <= cnt; guest++) {
		printf("%c님, 어떤 커피를 주문하시겠어요?", guest);
		printf("(1:라떼, 2:카푸치노, 3:아메리카노, 4:마끼야또)\n");
		scanf_s("%d", &coffee);
		getchar();

		choice_num = coffe_machine(coffee, guest);

		// 주문 취소시 루프를 빠져나가도록 하는 코드
		if (choice_num == -1) {
			printf("처음부터 다시 시작해주세요\n\n");
			break;
		}
	}
	return 0;
}

int coffe_machine(int coffee, char guest) {
	
	if (coffee == 1) {
		printf("%c님 커피 나왔습니다.\n", guest);
		printf("%s 커피입니다.\n\n", latte);
	}
	else if (coffee == 2) {
		printf("%c님 커피 나왔습니다.\n", guest);
		printf("%s 커피입니다.\n\n", capucino);
	}
	else if (coffee == 3) {
		printf("%c님 커피 나왔습니다.\n", guest);
		printf("%s 커피입니다.\n\n", americano);
	}
	else if (coffee == 4) {
		printf("%c님 커피 나왔습니다.\n", guest);
		printf("%s 커피입니다.\n\n", macchiato);
	}
	else {
		printf("%c님 주문 취소하셨습니다.\n\n", guest);
		return -1;		// 주문 취소시 반환값을 -1로 주고 메인함수의 루프를 탈출시키고 재시작하게끔 한다.
	}
	return 0;
}
