#include <stdio.h>
#include <stdlib.h>

int main(void) {

	system("title 성수 1개 입력 후 출력 프로그램");

	int num = 0;

	printf("정수 1개를 입력하세요 : ");
	scanf_s("%d", &num);
	// &(앰퍼센트)는 변수의 주소를 알려주는 주소 참조 연산자이다.
	//printf("변수 num의 메모리 주소값(10진수) : %d 입니다.\n", &num);
	printf("변수 num의 메모리 주소값(16진수) : %p 입니다.\n", &num);

	printf("키보드에 입력된 값은 %d 입니다.\n", num);

	return 0;
}