#include <stdio.h>

int xor(int, int);
int test_xor(void);

int main(void)
{
    int a, b;
    char result;

    /* test */
    if (test_xor())
    {
        return 1;
    }

    /* get user input */
    printf("A = ");
    scanf("%d", &a);
    printf("B = ");
    scanf("%d", &b);

    /* a xor b */
    /* display result */
    if (xor(a, b))
    {
        printf("A XOR B は 真\n");
    }
    else
    {
        printf("A XOR B は 偽\n");
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

/* test xor function */
int test_xor(void)
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
    if (xor(a, b))
    {
        printf("test failed. a=%d, b=%d\n", a, b);
        return 1;
    }

    return 0;
}
