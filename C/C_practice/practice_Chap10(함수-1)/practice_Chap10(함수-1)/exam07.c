// 유틸리티 함수에 대한 실습 - 2(system() 함수)
// system() : 매개변수의 값을 직접 운영체제(OS)에 전달하는 함수

#include<stdio.h>
#include<stdlib.h>	// system()함수를 사용하기 위함
#include<conio.h>	// _getch()함수를 사용하기 위함

int main(void) {

	system("titel system()함수 사용 프로그램");	// 실행창의 타이틀 출력(title)

	printf("현재 프로그램이 존재하는 디렉토리(폴더와 파일)의 정보 출력\n");

	system("dir");	// 현재 디렉토리의 내용을 출력하는 명령어


	printf("\n\n 아무 키나 누르면 프로그램이 종료됩니다.\n");
	printf("문자 입력 : ");
	_getch();	// 직접형 단일 문자 입력함수


	system("cls"); // 화면을 모두 지워버림



	return 0;
}