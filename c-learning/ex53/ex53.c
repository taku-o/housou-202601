#include <stdio.h>

double expo(double x, int y)
{
    double e;
    for (e = 1; y > 0; --y)
    {
        e *= x;
    }
    return e;
}

int main(void)
{
    double n1;
    int s1;
    printf("底を入力してください > ");
    scanf("%lf", &n1);
    printf("指数を入力してください > ");
    scanf("%d", &s1);

    printf("%fの%d乗は %fです。\n", n1, s1, expo(n1, s1));
    return 0;
}
