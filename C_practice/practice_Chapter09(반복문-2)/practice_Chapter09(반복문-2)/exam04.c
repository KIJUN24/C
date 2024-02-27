/*
	do~while문의 대한 실습-2
	사용자 의중을 물어보고 학점을 출력하는 프로그램
*/

#include<stdio.h>

int main(void) {

	int jumsu = 0, cnt = 1;  // 점수, 반복 횟수 카운팅하는 변수
	char op = ' ';	// 프로그램 반복 수행을 선택할 변수

	do {
		printf("<%d회 실행>\n", cnt);
		printf("프로그램을 시작하시겠습니까?(Y/N) : ");
		scanf_s("%c", &op, sizeof(char));

		if (op == 'n' || op == 'N') {
			printf("총 %d회 수행 후 종료합니다.\n", cnt);
			break;
		}
		else if (op == 'Y' || op == 'y') {
		re_jumsu:	// 사용자가 점수의 허용범위를 벗어났을 때 이동하기 위해서 레이블 생성
			printf("점수 입력 : ");
			scanf_s("%d", &jumsu);

			// 학점을 출력하기 위해 중첩 if문 사용
			if (jumsu <= 100 && jumsu >= 90) {
				printf("A학점\n\n");
			}
			else if (jumsu < 90 && jumsu >= 80) {
				printf("B학점\n\n");
			}
			else if (jumsu < 80 && jumsu >= 70) {
				printf("C학점\n\n");
			}
			else if (jumsu < 70 && jumsu >= 60) {
				printf("D학점\n\n");
			}
			else if (jumsu < 60 && jumsu >= 0) {
				printf("F학점\n\n");
			}
			else {
				printf("점수 %d는(은) 허용 구간이 아닙니다.\n", jumsu);
				printf("점수를 다시 입력해주세요.\n");
				goto re_jumsu;	// 점수를 다시 입력할 수 있도록 강제로 레이블이 존재하는 곳으로 이동
			}
			getchar(); // 버처 내용 지우기
			cnt++;
		}
		else {
			printf("입력한 알파벳 %c는(은) 허용되지 않습니다.\n", op);
			printf("알파벳을 다시 입력하세요.\n\n");
			getchar();
			cnt++;
		}
	} while (1);
	return 0;
}