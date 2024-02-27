/*
	유틸리티 함수에 대한 실습-1(exit() 함수)
	exit(int) : 실행 중인 프로세스를 강제로 종료할 때 사용하는 함수
	매개변수가 0일 경우 오류가 없음을 의미한다.
	매개변수가 1일 경우 오류가 발생했음을 의미한다.
	return문과 유사하지만 return은 함수의 종료를 알리고 호출한 곳으로 값을 돌려주거나 돌려주지 않는 경우에 사용한다.

	exit함수 보다는 return문을 사용하기를 권장한다.
	강제종료 하는 것이다 보니 예민하게 생각해서 사용해야 한다.
*/

#include<stdio.h>
#include<stdlib.h>

int main(void) {

	int cnt = 0;
	int hap = 0;

	while(1) {
		hap += cnt;
		
		if (hap >= 100) {
			printf("합계가 100이상이 되었습니다.\n");
			//exit(0);

			return 0;
		}

		cnt++;
	}

	return 0;
}