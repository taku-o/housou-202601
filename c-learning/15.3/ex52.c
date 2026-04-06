#include <stdio.h>

int plus(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main(void)
{
    int n1, n2;

    printf("整数n1の値 > ");
    scanf("%d", &n1);
    printf("整数n2の値 > ");
    scanf("%d", &n2);

    printf("%d + %d = %d\n", n1, n2, plus(n1, n2));
    return 0;
}
