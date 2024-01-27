#include<stdio.h>

//int main(void) {
//	char blood = '  ';
//
//	printf("혈액형을 입력해주세요.\n");
//	printf("A형인 경우 'A' 또는 'a'로 입력해주세요.\n");
//	printf("B형인 경우 'B' 또는 'b'로 입력해주세요.\n");
//	printf("AB형인 경우 'C' 또는 'c'로 입력해주세요.\n");
//	printf("O형인 경우 'O' 또는 'o'로 입력해주세요.\n");
//
//	printf("혈액형에 해당하는 알파벳 입력 : ");
//	scanf_s("%c", &blood, sizeof(blood));
//
//	if (blood == 'A' || blood == 'a')
//	{
//		printf("A형은 부드럽고 섬세한 성향을 지닙니다.\n");
//	}
//	else if (blood == 'B' || blood == 'b')
//	{
//		printf("B형은 주위 변화에 민감한 성향을 지닙니다.\n");
//	}
//	else if (blood == 'C' || blood == 'c')
//	{
//		printf("AB형은 예술적인 감각을 가진 성향을 지닙니다.\n");
//	}
//	else if (blood == 'O' || blood == 'o')
//	{
//		printf("O형은 활발하고 쾌활한 성향을 지닙니다.\n");
//	}
//	else
//	{
//		printf("A B AB O 혈액형에 대당하는 영어를 입력하시오.\n");
//	}
//
//	/*
//	프로그램의 디버깅(에러를 잡아나가는 과정, 때로는 디버깅은 프로그램의 흐름을 보고자 할 때 사용)
//	먼저, 브레이크포인트(중단점, 토글포인트, 디버깅을 시작하는 지점)을 설정한다.(숫자 왼쪽 색 다른 부분 클릭)
//	그리고, F5을 눌러 디버그 모드로 프로그램을 실행시킨다.
//	F11을 이용하여 한 단계씩 프로그램의 실행 과정을 살펴본다.(변수의 값, 메모리 주소, CPU의 관여도 등)
//	Ctrl + F5를 이용하여 실행하면 브레이크포인트는 무시된다.
//	*/
//
//
//	return 0;
//}

#include <string.h> // 문자열에 대한 편리한 함수 목록을 제공하는 헤더파일
int main(void) {
	char blood[3] = { 0 };

	printf("혈액형을 입력해주세요.\n");
	printf("A형인 경우 'A' 또는 'a'로 입력해주세요.\n");
	printf("B형인 경우 'B' 또는 'b'로 입력해주세요.\n");
	printf("AB형인 경우 'AB' 또는 'ab'로 입력해주세요.\n");
	printf("O형인 경우 'O' 또는 'o'로 입력해주세요.\n");

	printf("혈액형에 해당하는 알파벳 입력 : ");
	scanf_s("%s", &blood, sizeof(blood));

	//int result = strcmp(blood, "A");
	//printf("%d\n", result);
	// strcmp(원본값, 비교 대상) 
	// 원본값과 비교대상이 같다면 0
	// 같지 않으면 1
	// 아예 다르면 -1

	
	if (!strcmp(blood, "A") || (!strcmp(blood, "a")))
	{
		printf("A형은 부드럽고 섬세한 성향을 지닙니다.\n");
	}
	else if (!strcmp(blood, "B") || (!strcmp(blood, "b")))
	{
		printf("B형은 주위 변화에 민감한 성향을 지닙니다.\n");
	}
	else if (!strcmp(blood, "AB") || (!strcmp(blood, "ab")))
	{
		printf("AB형은 예술적인 감각을 가진 성향을 지닙니다.\n");
	}
	else if (!strcmp(blood, "O") || (!strcmp(blood, "o")))
	{
		printf("O형은 활발하고 쾌활한 성향을 지닙니다.\n");
	}
	else
	{
		printf("A B AB O 혈액형에 대당하는 영어를 입력하시오.\n");
	}

	return 0;
}
