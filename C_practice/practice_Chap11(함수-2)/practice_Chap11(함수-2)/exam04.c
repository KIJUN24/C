// 함수 원형 종류에 대한 실습4 - 반환값(리턴값)만 존재하는 함수, 매개변수는 없음

// 사용자 정의 함수에서 사용자로부터 입력을 받는 알파벳을 main()로 전달하는 예제

#include<stdio.h>

char alpha();

int main(void) {

	char alphabet = ' ';
	
	alphabet = alpha();

	printf("\n[main()함수 영역]\n");
	printf("문자값> 전달받은 알파벳 : %c\n", alphabet);
	printf("아스키 코드값> 전달받은 알파벳의 아스키코드 값 : %d\n", alphabet);

	return 0;
}

char alpha() {

	char input = ' ';

	printf("\n[alpha()함수 영역]\n");
	printf("알파벳을 입력하세요 : ");
	scanf_s("%c", &input, sizeof(char));


	return input;
}