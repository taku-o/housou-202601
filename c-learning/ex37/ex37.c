#include <stdio.h>

int main(void)
{
    int price;
    int year;
    double rate;
    printf("税抜き価格を入力してください。> ");
    scanf("%d", &price);
    printf("年度を入力してください。> ");
    scanf("%d", &year);

    rate = year <= 2019? 1.05: 1.10;
    printf("税込み価格は%d円です。\n", (int)(price * rate));
    return 0;
}
