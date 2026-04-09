#include <stdio.h>

int xor(int, int);

int main(void)
{
    int a, b;

    a = 3;
    b = 0;
    if (!xor(a, b))
    {
        printf("test failed. a=%d, b=%d\n", a, b);
        return 1;
    }

    a = 2;
    b = 5;
    if (xor(a, b))
    {
        printf("test failed. a=%d, b=%d\n", a, b);
        return 1;
    }

    a = 0;
    b = 0;
    if (!xor(a, b))
    {
        printf("test failed. a=%d, b=%d\n", a, b);
        return 1;
    }
}

/* return 1 if xor result is true, or 0. */
int xor(int a, int b)
{
    if ((a && b) || (!a && !b))
    {
        return 0;
    }
    return 1;
}
