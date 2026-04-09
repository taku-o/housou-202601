#include <stdio.h>

int sqr(int);
int test_sqr(void);

int main(void)
{
    int n;
    int a, b;

    /* test */
    if (test_sqr()) return 1;

    /* 入力 */
    printf("2以上の整数を入力してください > ");
    scanf("%d", &n);
    if (n < 2)
    {
        printf("入力した値が範囲外です。\n");
        return 1;
    }

    /* 計算 */
    a = sqr(n);
    b = n / (a * a);

    /* 結果表示 */
    if (a == 1)
    {
        printf("%d の平方根は √%d\n", n, b);
    }
    else if (b == 1)
    {
        printf("%d の平方根は %d\n", n, a);
    }
    else {
        printf("%d の平方根は %d√%d\n", n, a, b);
    }
    return 0;
}

/*
 * nをiの2乗で割り切れる時、そのiを返す。
 */
int sqr(int n)
{
    int i;

    for (i = n; i > 0; --i)
    {
        if (n % (i * i) == 0)
        {
            return i;
        }
    }

    /* 最終的に1の2乗で必ず割り切れるのでここには来ない */
    return 0;
}

int test_sqr(void)
{
    int n;
    int expected;
    int actual;

    n = 12;
    expected = 2;
    actual = sqr(n);
    if (actual != expected)
    {
        printf("test failed. n=%d, actual=%d, expected=%d", n, actual, expected);
        return 1;
    }

    n = 16;
    expected = 4;
    actual = sqr(n);
    if (actual != expected)
    {
        printf("test failed. n=%d, actual=%d, expected=%d", n, actual, expected);
        return 1;
    }

    n = 17;
    expected = 1;
    actual = sqr(n);
    if (actual != expected)
    {
        printf("test failed. n=%d, actual=%d, expected=%d", n, actual, expected);
        return 1;
    }

    n = 72;
    expected = 6;
    actual = sqr(n);
    if (actual != expected)
    {
        printf("test failed. n=%d, actual=%d, expected=%d", n, actual, expected);
        return 1;
    }

    return 0;
}

