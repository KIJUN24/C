/*
	문제3
	다음 내용에 맞는 프로그램을 작성하시오.
	조건
	문자형 변수 1개 선언 및 초기화 : char alpha = ' '
	알파벳 1개 입력 받음
	입력한 알파벳에 문자 출력 형식 지정자 사용
	입력한 알파벳에 해당하는 아스키코드값을 10진수 정수로 출력
	입력한 알파벳을 기준으로 8번째에 해당하는 알파벳을 출력
	출력결과
	알파벳 입력 : K
	입력한 알파벳 : K
	알파벳 아스키코드값 : 75
	입력한 알파벳 + 8 : S
*/

#include<stdio.h>

int main(void) {

	char alpaha = ' ';

	printf("알파벳 입력 : ");
	scanf_s("%c", &alpaha, sizeof(alpaha));
	printf("입력한 알파벳 : %c\n", alpaha);
	printf("알파벳 아스키코드값 : %d\n", alpaha);
	int int_alpha = alpaha;
	char temp_alpha = int_alpha + 8;
	printf("입력한 알파벳 + 8 : %c", temp_alpha);

	return 0;
}