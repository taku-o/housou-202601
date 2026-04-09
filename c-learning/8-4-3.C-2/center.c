#include <stdio.h>

int median(int,int,int);
int test_median(void);

int main(void)
{
    int a, b, c;
    int mid;

    /* test */
    if (test_median()) return 1;

    /* 入力受け取り */
    printf("整数を3つ入力してください。\n");
    printf("1つ目 > ");
    scanf("%d", &a);
    printf("2つ目 > ");
    scanf("%d", &b);
    printf("3つ目 > ");
    scanf("%d", &c);

    /* 計算 */
    mid = median(a, b, c);

    /* 結果表示 */
    printf("中央値は %d です。\n", mid);
    return 0;
}

/*
 * a,b,cを受け取り、中央の値を返す。
 */
int median(int a, int b, int c)
{
    /* max is a */
    if (a >= b && a >= c)
    {
        return b >= c? b: c;
    }
    /* max is b */
    if (b >= a && b >= c)
    {
        return a >= c? a: c;
    }
    /* max is c */
    return a >= b? a: b;
}

int test_median(void)
{
    int expected, actual;

    expected = 4;
    actual = median(5, 3, 4);
    if (expected != actual)
    {
        printf("test failed. expected=%d, actual=%d\n", expected, actual);
        return 1;
    }

    expected = 4;
    actual = median(4, 3, 5);
    if (expected != actual)
    {
        printf("test failed. expected=%d, actual=%d\n", expected, actual);
        return 1;
    }

    expected = 3;
    actual = median(3, 3, 5);
    if (expected != actual)
    {
        printf("test failed. expected=%d, actual=%d\n", expected, actual);
        return 1;
    }

    expected = 5;
    actual = median(5, 4, 5);
    if (expected != actual)
    {
        printf("test failed. expected=%d, actual=%d\n", expected, actual);
        return 1;
    }

    expected = 3;
    actual = median(3, 3, 3);
    if (expected != actual)
    {
        printf("test failed. expected=%d, actual=%d\n", expected, actual);
        return 1;
    }

    return 0;
}
