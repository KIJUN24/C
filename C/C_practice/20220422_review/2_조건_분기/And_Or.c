#include <stdio.h>

int main(void) {
	int a = 10;
	int b = 10;
	int c = 12;
	int d = 13;

	if (a == b || c == d) {
		printf("a와 b, 혹은 c와 d도 같습니다.\n");
	}
	else{
		printf("값이 서로 다르네요.");
	}

	return 0;
}