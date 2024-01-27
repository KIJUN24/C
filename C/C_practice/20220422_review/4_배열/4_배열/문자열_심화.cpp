#include <stdio.h>

int main()
{
	//char c_array[7] = { 'c', 'o', 'd', 'i', 'n', 'g', '\0' };
	//printf("%s\n", c_array);


	//char c_array[10] = { 'c', 'o', 'd', 'i', 'n', 'g'};	// 나머지 칸은 NULL로 채워진다.
	//printf("%s\n", c_array);


	// 문자열 입력받기 : 경찰서 조서 쓰기
	char name[256];
	printf("이름을 입력하세요 : ");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);


	return 0;
}