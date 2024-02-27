/*
	문제 4
	무한루프를 돌면서 대소문자 구별 없이 Q,q를 찾기 위한 프로그램을 작성하시오.

	실행결과
	알파벳 입력 : 3
	찾는 알파벳이 아닙니다. 알파벳을 다시 입력하세요.

	알파벳 입력 : k
	찾는 알파벳이 아닙니다. 알파벳을 다시 입력하세요.

	알파벳 입력 : Q
	총 3회 실행하여 알파벳을 찾았습니다.
	찾는 알파벳은 대소문자 구별 없이 'Q' 입니다.
*/

#include<stdio.h>

int main(void) {
	
	char op = ' ';
	int cnt = 1;

	while (1) {
		
		printf("알파벳 입력 : ");
		scanf_s("%c", &op, sizeof(char));

		if (op == 'Q' || op == 'q') {
			printf("총 %d회 실행하여 알파벳을 찾았습니다.\n", cnt);
			printf("찾은 알파벳은 대소문자 구별 없이 \'Q\' 입니다.\n");
			break;
		}
		else {
			printf("찾는 알파벳이 아닙니다. 알파벳을 다시 입력하세요.\n\n");
			getchar();
		}
		cnt ++;
	}

	return 0;
}