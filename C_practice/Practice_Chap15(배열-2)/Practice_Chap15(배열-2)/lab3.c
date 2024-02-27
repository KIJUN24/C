/*
	문제-3
	사용자로부터 문자열을 입력받아서 해당 문자열의 길이를 구하는 프로그램을 작성하시오.
	단, string.h 파일을 포함하여 헤더 파일에 있는 함수 strlen()를 이용하려 길이를 구하시오.
	반복문은 사용하지 않도록한다.

	실행결과
	문자열을 입력하세요 : abcde
	입력하신 문자열의 길이 : 5개
*/

#include<stdio.h>
#include<string.h>
#define LENGTH 15

int main(void)
{
	char str1[LENGTH] = "";
	char str2[] = "";			// NULL 문자열을 의미.
	int str_len = 0;


	printf("문자열을 입력하세요 : ");
	scanf_s(" %s", str1, sizeof(str1));


	str_len = strlen(str1);

	printf("str1의 길이 : ");
	printf("%d개\n", str_len);						// NULL 문자를 제외한 문자열의 길이를 출력
	printf("str2의 길이 : %d\n", strlen(str2));		// NULL 문자의 길이를 출력


	// 입력한 문자열의 마지막 문자를 삭제하고 출력하는 코드
	if (str_len > 0)	// 문자열의 길이가 0 초과라면... 뭐라도 쓰여졌다면...
	{
		str1[str_len - 1] = '\0';	// 마지막 문자를 삭제하는 코드
	}
	printf("마지막 한 문자를 삭제한 후 출력\n");
	printf("str1의 값 : %s", str1);


	return 0;
}


// 퀴즈
// 한글을 입력하면 마지막 한글 한 글자를 삭제하면서 제대로 출력되는 위의 프로그램을 수정하시오.