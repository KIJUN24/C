/*
	do~while문을 이용하여 무한루프를 돌게 한다.
	Y 또는 N으로 사용자의 의중을 물어보는 코드가 들어가야 한다.
	프로그램 실행 카운트를 하여 출력을 하도록 한다.

	출력결과
	< 1 회 실행 >
	2 X 1 = 02  3 X 1 = 03  4 X 1 = 04  5 X 1 = 05  6 X 1 = 06  7 X 1 = 07  8 X 1 = 08  9 X 1 = 09
	2 X 2 = 04  3 X 2 = 06  4 X 2 = 08  5 X 2 = 10  6 X 2 = 12  7 X 2 = 14  8 X 2 = 16  9 X 2 = 18
	...
	2 X 9 = 18  3 X 9 = 27  4 X 9 = 36  5 X 9 = 45  6 X 9 = 54  7 X 9 = 63  8 X 9 = 72  9 X 9 = 81
	프로그램을 다시 실행하시겠습니까? ( Y / N ) : k
	입력한 알파벳 "k"는(은) 허용하지 않습니다.
	알파벳을 다시 입력하세요.
	프로그램을 다시 실행하시겠습니까? ( Y / N ) : y
	< 2 회 실행 >
	2 X 1 = 02  3 X 1 = 03  4 X 1 = 04  5 X 1 = 05  6 X 1 = 06  7 X 1 = 07  8 X 1 = 08  9 X 1 = 09
	2 X 2 = 04  3 X 2 = 06  4 X 2 = 08  5 X 2 = 10  6 X 2 = 12  7 X 2 = 14  8 X 2 = 16  9 X 2 = 18
	...
	2 X 9 = 18  3 X 9 = 27  4 X 9 = 36  5 X 9 = 45  6 X 9 = 54  7 X 9 = 63  8 X 9 = 72  9 X 9 = 81
	프로그램을 다시 실행하시겠습니까? ( Y / N ) : n
	총 2회 실행 후 프로그램을 종료합니다.
*/

#include<stdio.h>

int main(void) {

	int dan = 0, cnt = 0, recnt = 1, gob = 0; // 구구단변수, 카운트 변수, 곱셈 저장 변수
	char op = ' ';

	do {
		printf("< %d 회 실행 >\n", recnt);
		
		for (cnt = 1 ; cnt <= 9 ; cnt++) {
			for (dan = 2 ; dan <= 9; dan++) {
				gob = dan * cnt;
				printf("%d X %d = %02d   ", dan, cnt, gob);
			}
			printf("\n");
		}
	re_start:
		printf("프로그램을 다시 실행하시겠습니까? ( Y / N ) : ");
		scanf_s("%c", &op, sizeof(char));
		getchar();

		if (op == 'N' || op == 'n') {
			printf("총 %d회 실행 후 프로그램을 종료합니다.\n", recnt);
			break;
		}
		else if (op == 'Y' || op == 'y') {
			// 구구단 출력
			/*for (cnt = 1; cnt <= 9; cnt++) {
				for (dan = 2; dan <= 9; dan++) {
					gob = dan * cnt;
					printf("%d X %d = %02d   ", dan, cnt, gob);
				}
				printf("\n");
			}*/
			recnt++;
			continue;
		}
		else {
			printf("입력한 알파벳 %c는(은) 허용하지 않습니다.\n", op);
			printf("알파벳을 다시 입력하세요.\n");
			goto re_start;
		}
		
		/*switch (op) {
			case 'Y':
			case 'y':
				recnt++;
				continue;
				break;
			case 'N':
			case 'n':
				printf("총 %d회 실행 후 프로그램을 종료합니다.\n", recnt);
				printf("알파벳을 다시 입력하세요.\n");
				return 0;
				break;
			default:
				printf("입력한 알파벳 %c는(은) 허용하지 않습니다.\n", op);
				printf("알파벳을 다시 입력하세요.\n");
				goto re_start;
				break;
		}*/

	} while (1);

	return 0;
}