#include <stdio.h>

int main(void)
{
    int i = 100;
    while (1)
    {
        if (i < 1)
        {
            break;
        }
        if (i % 3 == 0 || i % 5 == 0)
        {
            printf("%d ", i);
        }
        i--;
    }
    printf("\n");
    return 0;
}
