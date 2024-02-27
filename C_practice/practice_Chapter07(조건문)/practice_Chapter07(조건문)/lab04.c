/*
	문제4
	char regNo[14]를 선언하고 초기화를 한다.
	주민등록번호를 입력받고 남자인지 여자인지 구별하는 프로그램을 작성하시오.
	실행결과
	당신의 주민번호를 입력하세요.(0112311111222) : 7811251777578
	당신은 2000년 이전에 출생한 남자입니다.
*/

#include<stdio.h>

int main(void) {
	char regNo[14] = {0};
	
	printf("당신의 주민번호를 입력하세요.(0112311111222) : ");
	scanf_s("%s", regNo, sizeof(regNo));

	//printf("%s\n", regNo[6]);

	if (regNo[6] == '1' || regNo[6] == '3')
	{
		if (regNo[6] == '1')
		{
			printf("당신은 2000년 이전에 출생한 남자입니다.\n");
		}
		else
		{
			printf("당신은 2000년 이후에 출생한 남자입니다.\n");
		}
	}
	else if (regNo[6] == '2' || regNo[6] == '4')
	{
		if (regNo[6] == '4')
		{
			printf("당신은 2000년 이전에 출생한 여자입니다.\n");
		}
		else
		{
			printf("당신은 2000년 이후에 출생한 여자입니다.\n");
		}
	}
	else
	{
		printf("주민번호를 다시 확인해주세요.\n");
	}

	return 0;
}