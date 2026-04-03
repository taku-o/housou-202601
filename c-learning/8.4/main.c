#include <stdio.h>

int main(void)
{
    int weight;

    printf("体重を入力してください > ");
    scanf("%d", &weight);

    if (weight % 2)
    {
        printf("体重は奇数です。1を足します。\n");
        weight = weight + 1;
    }
    printf("あなたは%dkg級です。\n", weight);

    return 0;
}