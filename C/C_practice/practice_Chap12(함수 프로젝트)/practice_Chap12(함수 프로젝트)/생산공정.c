/*
	프로젝트-1 : 자동차 생산하는 과정을 함수로 쪼개서 모듈 단위 분리하여 실습.
	함수 선언
	1. int sonato2000();  ->  sonata2000cc 생산 과정 출력
	2. int sonato2400();  ->  sonata2400cc 생산 과정 출력
	3. int bodynum();	  ->  차대 번호 생성 후 반환
	4. 전역 변수 : char color[5][10] = {"흰색", "검은색", "파란색", "은색", "빨간색"}
*/

#include "sonata.h"

int main(void)
{
	int i = 0;
	srand((unsigned)time(NULL));
	printf("\n=== sonata 2000CC & 2400CC 생산 시작 ===\n");

	for (i = 1; i <= 5; i++)
	{
		sonato2000();
		sonato2400();
	}

	printf("\n=== sonata 2000CC & 2400CC 생산 완료 ===\n");


	return 0;
}