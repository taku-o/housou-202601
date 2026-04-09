#include <stdio.h>

int numberlength(int);
int test_numberlength(void);

int main(void)
{
    int n;
    int length;

    /* test */
    test_numberlength();

    printf("正の整数を入力してください。 > ");
    scanf("%d", &n);

    /* get number length */
    length = numberlength(n);
    if (length == 0)
    {
        printf("計算可能範囲外の値です。\n");
        return 1;
    }

    /* result */
    printf("%dの桁数は%dです。\n", n, length);
    return 0;
}

/* 整数の桁数を返す。もし範囲外の値なら0を返す。 */
int numberlength(int n)
{
    int i;
    int current;

    if (n <= 0)
    {
        return 0;
    }

    current = n;
    for (i = 1; i < 10; ++i)
    {
        current /= 10;
        if (current == 0)
        {
            return i;
        }
    }

    return 0;
}

int test_numberlength(void)
{
    int n;
    int len;
    int r;

    n = 5678;
    len = 4;
    r = numberlength(n);
    if (len != r)
    {
        printf("test failed. %d length is %d \n", n, r);
        return 1;
    }

    n = 8080088;
    len = 7;
    r = numberlength(n);
    if (len != r)
    {
        printf("test failed. %d length is %d \n", n, r);
        return 1;
    }

    n = -1;
    len = 0;
    r = numberlength(n);
    if (len != r)
    {
        printf("test failed. %d length is %d \n", n, r);
        return 1;
    }

    n = 2100000000;
    len = 0;
    r = numberlength(n);
    if (len != r)
    {
        printf("test failed. %d length is %d \n", n, r);
        return 1;
    }

    return 0;

}

