#include <stdio.h>

int is_prime(int);

int main(void)
{
    int n;
    int r;
    printf("3以上の整数を入力してください。 > ");
    scanf("%d", &n);

    r = is_prime(n);
    if (r) {
        printf("%dは素数です。\n", n);
    } else {
        printf("%dは素数ではありません。\n", n);
    }
    return 0;
}

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
