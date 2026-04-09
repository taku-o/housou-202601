#include <stdio.h>

#define MAX_PLUS 1000000

int is_prime(int);

int main(void)
{
    int n;     /* ユーザーの入力値 */
    int minus; /* 入力値より小さい最大の素数 */
    int plus;  /* 入力値より大きい最小の素数 */
    int i;

    minus = 0;
    plus = 0;

    /* 入力の受け取り */
    printf("3以上の整数を入力してください。 > ");
    scanf("%d", &n);

    if (n < 3) {
        printf("入力値は3以上の整数である必要があります。値:%d \n", n);
        return 1;
    }

    /* nより小さい最大の素数の計算 */
    for (i = n - 1; i > 0; --i)
    {
        if (is_prime(i))
        {
            minus = i;
            break;
        }
    }

    /* nより大きい最小の素数の計算 */
    for (i = n + 1; i < MAX_PLUS; ++i)
    {
        if (is_prime(i))
        {
            plus = i;
            break;
        }
    }

    if (minus == 0) {
        printf("%dより小さい最大の素数は見つかりませんでした。\n", n);
        return 1;
    }
    if (plus == 0) {
        printf("%dより大きい最小の素数は探索範囲では見つかりませんでした。\n", n);
        return 1;
    }

    /* 結果表示 */
    printf("%dより小さい最大の素数は%dです。\n", n, minus);
    printf("%dより大きい最小の素数は%dです。\n", n, plus);
    return 0;
}

/*
 * return 1 if a is 素数.
 * or 0.
 *
 * 1とその値以外では割り切れなければ1
 */
int is_prime(int a)
{
    int y;
    for (y = 2; y < a; ++y)
    {
        if (a % y == 0) {
            return 0;
        }
    }
    return 1;
}
