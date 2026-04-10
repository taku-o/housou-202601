#include <stdio.h>

int main(void)
{
    int height;
    int i;

    /* 10段の出力 */
    for (height = 1; height <= 10; ++height)
    {
        /* oの前は10-heightの空白で埋める */
        for (i = 1; i <= 10 - height; ++i)
        {
            printf(" ");
        }

        /* 1 + 2 * height個のoを出力 */
        for (i = 0; i < (1 + (height - 1) * 2); ++i)
        {
            printf("o");
        }

        printf("\n");
    }

    return 0;
}


