#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int j;

    printf("整数を入力してください。 > ");
    scanf("%d", &j);

    printf("%dの絶対値は%dです。\n", j, abs(j));
    return 0;
}
