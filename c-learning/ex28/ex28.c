#include <stdio.h>

int main(void)
{
    double pi;
    printf("円周率はいくつですか > ");
    scanf("%lf", &pi);

    if (pi > 3.1 && pi < 3.15)
        printf("正解です。");
    else
        printf("不正解です。");
    return 0;
}