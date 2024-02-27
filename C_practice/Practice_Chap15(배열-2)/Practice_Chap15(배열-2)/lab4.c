/*
	문제-4
	사용자로부터 문자열(단어)을 입력받는데 무한루프를 실행하고 탈출조건은 "."가 입력되는 무한루프를 빠져나가도록 do~while문을 이용한다.
	string.h 파일에 있는 strcat(), strcmp() 둘 다 이용하시오.
	단어를 입력받으면 계속 단어를 연결해 하나의 문장 같은 형태로 만들어서 출력하시오.

	실행결과
	단어 입력 : ab
	단어 입력 : cd
	단어 입력 : ef
	단어 입력 : .
	문장 출력 : ab cd ef .
*/

// strcat() 으로 입력된 단어를 붙인다.
// strcmp() 으로 비교를 해 출력 순서를 정한다.

#include<stdio.h>
#include<string.h>
#define MAX_LENGTH 100
#define WORD_LENGTH 20

int main(void)
{
	char str1[MAX_LENGTH] = "";		// 단어를 연결하여 저장할 배열을 선언 및 초기화
	char word[WORD_LENGTH] = "";

	do
	{
		printf("단어 입력 : ");
		scanf_s(" %s", word, sizeof(word));

		// 단어를 연결하는 코드
		strcat_s(str1, sizeof(str1), word);		// 입력받은 단어를 문장 끝에 붙인다.
		strcat_s(str1, sizeof(str1), " ");		// 단어를 구분할 수 있도록 빈 칸도 저장한다.

	} while (strcmp(word, "."));	// 단어 입력시 "."를 입력하면 0이 리턴되어 루프를 빠져나간다.

	printf("연결된 문자열 출력 : %s\n", str1);

	return 0;
}