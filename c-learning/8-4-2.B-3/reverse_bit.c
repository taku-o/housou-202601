#include <stdio.h>

int main(void)
{
    int n;
    int q, r;

    /* 入力 */
    printf("正の整数を入力してください > ");
    scanf("%d", &n);
    if (n < 0) {
        printf("入力した値が範囲外の値です。\n");
    }

    /* 結果表示 */
    printf("%dを二進数にして各桁を逆順に並べると", n);

    for (q = n; ; )
    {
        r = q % 2;
        q = q / 2;
        printf("%d", r);
        if (q == 0)
        {
            break;
        }
    }

    printf("\n");
    return 0;
}

