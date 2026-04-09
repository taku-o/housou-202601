#include <stdio.h>

int main(void)
{
    int height;
    int i;

    /* 10段の出力＋11段目は先頭空白のみ */
    for (height = 1; height < 12; ++height)
    {
        /* 1行目以外は先頭を20マスの空白で埋める */
        if (height > 1)
        {
            for (i = 0; i < 20; ++i)
            {
                printf(" ");
            }
        }

        /* 1段目は1個のoで埋める */
        /* 2段目から10段目は行+1個のoで埋める */
        if (height < 11)
        {
            for (i = 0; height == 1? i < height: i < (height + 1); ++i)
            {
                printf("o");
            }
        }

        printf("\n");
    }

    return 0;
}


