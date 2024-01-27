#include <stdio.h>

int main(void)
{
	int arr[3] = { 5, 10, 15 };
	int* ptr = arr;
	for (int i = 0; i < 3; i++) {
		printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
	}
	printf("\n");

	for (int i = 0; i < 3; i++) {
		printf("포인터 ptr[%d]의 값 : %d\n", i, ptr[i]);
	}
	ptr[0] = 100;
	ptr[1] = 200;
	ptr[2] = 300;
	printf("\n\n");
	for (int i = 0; i < 3; i++) {
		//printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
		printf("배열 arr[%d]의 값 : %d\n", i, *(arr + i));
	}
	printf("\n");
	for (int i = 0; i < 3; i++) {
		//printf("포인터 ptr[%d]의 값 : %d\n", i, ptr[i]);
		printf("배열 arr[%d]의 값 : %d\n", i, *(ptr + i));
	}
	printf("\n");

	// *(arr + i) == arr[i] 같은 포현
	// arr == arr의 배열 첫 번째 값의 주소와 동일 == &arr[0]
	printf("arr자체의 주소 : %d\n", arr);
	printf("arr[0]의 주소 : %d\n", &arr[0]);

	printf("arr자체의 값이 가지는 주소의 실제 값 : %d\n", *arr); // *(arr + 0)
	printf("arr[0]의 실제 값 : %d\n", *&arr[0]);

	printf("\n");

	// *&는 아무것도 없는 것과 같다. &은 주소이며 *은 그 주소의 값이기 때문에,
	// *&는 서로 상쇄된다.
	printf("arr[0]의 실제 값(*& 상쇄) : %d\n", *&*&*&arr[0]);
	printf("arr[0]의 실제 값(아무것도 없음) : %d\n", arr[0]);

	return 0;
}