#include <stdio.h>

int myabs(int);

int main(void)
{
    int n;
    printf("整数を入力してください。 > ");
    scanf("%d", &n);

    printf("%dの絶対値は%dです。\n", n, myabs(n));
    return 0;
}

int myabs(int a)
{
    int c;
    c = a > 0? a: -a;
    return c;
}
