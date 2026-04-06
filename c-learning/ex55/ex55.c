#include <stdio.h>

int plus5(int);

int main(void)
{
    int n;
    printf("整数を入力してください。 >");
    scanf("%d", &n);

    printf("%d に 5を足すと %d です。\n", n, plus5(n));
    return 0;
}

int plus5(int a)
{
    int c;
    c = a + 5;
    return c;
}
