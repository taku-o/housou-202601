#include <stdio.h>
#include <math.h>

int main(void)
{
    double x;

    printf("非数の数を入力してください。 > ");
    scanf("%lf", &x);

    printf("%fの平方根は%fです。\n", x, sqrt(x));
    return 0;
}
