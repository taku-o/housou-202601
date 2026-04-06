#include <stdio.h>

int main(void)
{
    char c = 'A';
    char n = 65;

    if (c == n)
    {
        printf("c == n は真\n");
    }

    printf("cを文字としてみると%c, 整数としてみると%d\n", c, c);
    printf("nを文字としてみると%c, 整数としてみると%d\n", n, n);
    return 0;
}
