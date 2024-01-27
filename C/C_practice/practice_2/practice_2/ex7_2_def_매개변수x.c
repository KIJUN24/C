#include <stdio.h>

int get_num();

int main()
{
    int result;

    result = get_num();

    printf("반환값 : %d", result);

    return 0;
}

int get_num(void)
{
    int num;
    printf("숫자를 입력하시오 : ");
    scanf("%d", &num);

    return num;
}