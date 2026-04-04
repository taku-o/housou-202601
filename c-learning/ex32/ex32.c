#include <stdio.h>

int main(void)
{
    int max, min;
    int a, b, c;

    printf("整数を入力してください。\n");
    printf("整数a > ");
    scanf("%d", &a);
    printf("整数b > ");
    scanf("%d", &b);
    printf("整数c > ");
    scanf("%d", &c);

    max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }

    min = a;
    if (b < min)
    {
        min = b;
    }
    if (c < min)
    {
        min = c;
    }

    printf("最大値は%d, 最小値は%dです。\n", max, min);
    return 0;
}