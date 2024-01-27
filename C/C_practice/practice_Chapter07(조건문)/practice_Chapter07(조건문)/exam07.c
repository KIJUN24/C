#include<stdio.h>

int main(void) {
	char season = ' ';

	printf("봄  : A 또는 a\n");
	printf("여름: S 또는 s\n");
	printf("가을: F 또는 f\n");
	printf("겨울: W 또는 w\n");

	printf("좋아하는 계절을 입력해주세요 : ");
	scanf_s("%c", &season, sizeof(season));

	switch (season)
	{
		case 'A':
		case 'a':
			printf("선택한 계절 : 봄\n");
			printf("메시지 : 만물이 소생하는 계절\n");
			break;
		case 'S':
		case 's':
			printf("선택한 계절 : 여름\n");
			printf("메시지 : 바캉스를 떠나는 계절\n");
			break;
		case 'F':
		case 'f':
			printf("선택한 계절 : 가을\n");
			printf("메시지 :곡식과 과일이 풍성한 계절\n");
			break;
		case 'W':
		case 'w':
			printf("선택한 계절 : 겨울\n");
			printf("메시지 : 새하얀 눈이 덮인 스키의 계절\n");
			break;
		default:
			printf("선택한 계절이 없습니다.\n");
			printf("알파벳은 대소문자 구분없이 A,S,F,W만 허용됩니다.\n");
			break;
	}

	return 0;
}