#include <stdio.h>

int main(void)
{
    int input;
    printf("正の整数を入力してください > ");
    scanf("%d", &input);

    while (0 < input)
    {
        printf("%d ", input);
        input--;
    }
    printf("\n");
    return 0;
}
