/*
	사용자로부터 비밀번호 4자리를 입력받는데 시스템에 저장되어 있는 비밀번호와 같을 경우에는
	"비밀번호가 확인되었습니다.", 개행을 하고 "로그인 되었습니다." 개행을 하고"프로그램을 종료합니다."을 출력한다.
	비밀번호가 틀리다면 "비밀번호가 틀렸습니다. 다시 입력해주세요."를 출력하고 무한루프를 실행한다.
	시스템의 비밀번호는 "code"로 설정하도록 한다.

	실행결과
	비밀번호 4자리를 입력하세요. : abcd
	비밀번호가 틀렸습니다. 다시 입력해주세요.
	비밀번호 4자리를 입력하세요. : 12ss
	비밀번호가 틀렸습니다. 다시 입력해주세요.
	비밀번호 4자리를 입력하세요. : code
	비밀번호가 확인되었습니다.
	로그인 되었습니다.
	프로그램을 종료합니다.
*/

#include<stdio.h>
#include<string.h>
#define LENGTH 5

int main(void)
{
	char inputNum[LENGTH] = { NULL };
	char secretNum[LENGTH] = "code";
	int cnt = 0, length = 0;

	char cmp1[LENGTH] = "dcba";
	char cmp2[LENGTH] = "code";
	char cmp3[LENGTH] = "abcd";

	printf("strcmp(secretNum, cmp1)의 리턴값 : %d\n", strcmp(secretNum, cmp1));	// d가 c보다 뒤에 있으므로 -1출력
	printf("strcmp(secretNum, cmp2)의 리턴값 : %d\n", strcmp(secretNum, cmp2));	// 두 문자열이 같으므로 0출력
	printf("strcmp(secretNum, cmp3)의 리턴값 : %d\n", strcmp(secretNum, cmp3));	// a가 c보다 앞에 있으므로 1출력

	do
	{
again:	
		printf("비밀번호를 입력하세요. : ");
		scanf_s(" %s", inputNum, sizeof(inputNum));
		/*printf("\ninput : %d %s\n\n",sizeof(inputNum)/sizeof(char), inputNum);
		printf("secret : %d %s\n\n",sizeof(secretNum)/sizeof(char), secretNum);*/
		

		//for (cnt = 0; inputNum[cnt] != NULL; cnt++)
		//{
		//	//if (inputNum[cnt] >= 0 && inputNum[cnt] <= 9)
		//	//{
		//	//	printf("비밀번호가 틀렸습니다. 다시 입력해주세요.\n");
		//	//	goto again;
		//	//}

		//	if (inputNum[cnt] != secretNum[cnt])
		//	{
		//		printf("비밀번호가 틀렸습니다. 다시 입력해주세요.\n");
		//		goto again;
		//	}
		//	else
		//	{
		//		//printf("check\n");
		//		continue;
		//	}
		//}


		//if (inputNum[0] == 'c' && inputNum[1] == 'o' && inputNum[2] == 'd' && inputNum[3] == 'e')
		if(strcmp(secretNum, inputNum) == 0)
		// strcmp()함수는 비교할 2개의 문자열이 같으면 0을 리턴,
		// 첫 번째 매개변수 문자열이 두번째 문자열보다 알파벳 순으로 앞에 있으면 음수를 리턴(-1),
		// 반대로 알파벳 순으로 뒤에 있다면 양수(1)을 리턴.
		{
			printf("비밀번호가 확인되었습니다.\n");
			printf("로그인 되었습니다.\n");
			printf("프로그램을 종료합니다.\n");
			break;
		}
		else
		{
			printf("비밀번호를 다시 입력해주세요.\n");
			goto again;
		}

		

	} while (1);

	return 0;
}