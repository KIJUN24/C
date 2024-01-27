#include<stdio.h>

int main(void) {
	int jumsu = 0;

	printf("점수입력 입력 : ");
	scanf_s("%d", &jumsu);

	if (jumsu >= 90 && jumsu <= 100)
	{
		printf("입력한 점수는 %d이고\n", jumsu);
		printf("성적은 %c입니다.\n", 'A');
	}
	else if (jumsu >= 75 && jumsu <= 89)
	{
		printf("입력한 점수는 %d이고\n", jumsu);
		printf("성적은 %c입니다.\n", 'B');
	}
	else if (jumsu >= 60 && jumsu <= 74)
	{
		printf("입력한 점수는 %d이고\n", jumsu);
		printf("성적은 %c입니다.\n", 'C');
	}
	else if (jumsu >= 45 && jumsu <= 59)
	{
		printf("입력한 점수는 %d이고\n", jumsu);
		printf("성적은 %c입니다.\n", 'D');
	}
	else if (jumsu >= 0 && jumsu <= 44)
	{
		printf("입력한 점수는 %d이고\n", jumsu);
		printf("성적은 %c입니다.\n", 'F');
	}
	else
	{
		printf("0~100 숫자를 입력해주세요.\n");
	}

	return 0;
}