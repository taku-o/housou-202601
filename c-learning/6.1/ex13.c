#include <stdio.h>

int main(void)
{
    int a, b;
    int sum;

    printf("整数 a > ");
    scanf("%d", &a);
    printf("整数 b > ");
    scanf("%d", &b);

    sum = a + b;

    printf("a+bの結果は%d、a-bの結果は%dです。\n", sum, a-b);
    return 0;
}