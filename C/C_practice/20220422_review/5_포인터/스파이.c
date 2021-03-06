#include <stdio.h>

int main(void)
{
	// 포인터

	// [철수] : 101호 -> 메모리 공간의 주소
	// [영희] : 201호
	// [민수] : 301호

	// 각 문 앞에 '암호'가 걸려있음.
	int 철수 = 1; // 암호
	int 영희 = 2;
	int 민수 = 3;

	printf("철수네 주소 : %d, 암호 : %d\n", &철수, 철수);
	printf("영희네 주소 : %d, 암호 : %d\n", &영희, 영희);
	printf("민수네 주소 : %d, 암호 : %d\n", &민수, 민수);

	// 2. 미션맨
	// 첫 번째 미션 : 아파트의 각 집에 방문하여 문에 적힌 암호 확인
	int* 미션맨;  // 포인터 변수
	미션맨 = &철수;
	printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	미션맨 = &영희;
	printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	미션맨 = &민수;
	printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);


	// 두 번째 미션 : 각 암호에 3을 곱해라
	미션맨 = &철수;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	미션맨 = &영희;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	미션맨 = &민수;
	*미션맨 = *미션맨 * 3;
	printf("미션맨이 암호를 바꾼 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);


	// 3. 스파이
	// 미션맨이 바꾼 암호에서 2를 빼라.
	int* 스파이 = 미션맨;

	//스파이  (ex : 2552124)
	//			==>			      (ex : 2552124)  (스파이, 미션맨 둘 다) 누군가의 아파트 주소
	//미션맨  (ex : 2552124)

	printf("\n ... 스파이가 미션 수행하는 중 ... \n\n");
	스파이 = &철수;
	*스파이 = *스파이 - 2; // 철수 = 철수 - 2;
	printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", 스파이, *스파이);

	스파이 = &영희;
	*스파이 = *스파이 - 2; // 철수 = 철수 - 2;
	printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", 스파이, *스파이);

	스파이 = &민수;
	*스파이 = *스파이 - 2; // 철수 = 철수 - 2;
	printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", 스파이, *스파이);


	printf("\n ... 철수 영의 민수는 집에 오고서는 바뀐 암호를 보고 깜놀 ...\n\n");

	printf("철수네 주소 : %d, 암호 : %d\n", &철수, 철수);
	printf("영희네 주소 : %d, 암호 : %d\n", &영희, 영희);
	printf("민수네 주소 : %d, 암호 : %d\n", &민수, 민수);


	// 참고로.. 미션맨이 사는 곳의 주소는 &미션맨으로 확인
	printf("\n\n");
	printf("미션맨의 주소 : %d\n", &미션맨);
	printf("스파이의 주소 : %d\n", &스파이);

	return 0;
}