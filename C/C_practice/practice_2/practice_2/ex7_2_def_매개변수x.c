#include <stdio.h>

int get_num();

int main()
{
    int result;

    result = get_num();

    printf("��ȯ�� : %d", result);

    return 0;
}

int get_num(void)
{
    int num;
    printf("���ڸ� �Է��Ͻÿ� : ");
    scanf("%d", &num);

    return num;
}