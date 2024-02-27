/*
	기타 분기문에 대한 실습-2
	goto문에 대한 실습
	무한루프를 돌면서 입력한 알파벳이 대문자인지 판별하는 프로그램
*/

#include<stdio.h>

int main(void) {

	char op = ' ';

	do {
	reset:	// 레이블 생성
		printf("알파벳 대문자 입력 : ");
		scanf_s("%c", &op, sizeof(char));
		getchar();

		if (op >= 'A' && op <= 'Z') {
			printf("입력한 알파벳 %c는 대문자가 맞습니다.\n", op);
			printf("프로그램을 종료합니다.\n");
			break;
		}
		else {
			printf("입력한 알파벳 %c는 대문자가 아닙니다..\n", op);
			printf("알파벳을 다시 입력하세요.\n");
			goto reset;
		}

	} while (1);

	return 0;
}