#include <stdio.h>

int main(void)
{
    int n1, n2;
    printf("整数 1 > ");
    scanf("%d", &n1);
    printf("整数 2 > ");
    scanf("%d", &n2);
    printf("%d + %d は %d\n", n1, n2, n1 + n2);
    printf("%d - %d は %d\n", n1, n2, n1 - n2);
    printf("%d * %d は %d\n", n1, n2, n1 * n2);
    printf("%d / %d は %d\n", n1, n2, n1 / n2);
    printf("%d %% %d は %d\n", n1, n2, n1 % n2);
    return 0;
}