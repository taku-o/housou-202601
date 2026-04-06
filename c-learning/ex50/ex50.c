#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y;
    printf("数値1を入力してください。 > ");
    scanf("%lf", &x);
    printf("数値2を入力してください。 > ");
    scanf("%lf", &y);

    printf("%fの%f乗は%fです。\n", x, y, pow(x,y));
    return 0;
}
