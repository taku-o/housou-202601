#include <stdio.h>

#define BASE_PRICE 10000

/*
 * 残りremain_price円の時、
 * coin_price円の硬貨紙幣を何枚返せるか数値を返す。
 */
int refund_coin_count(int remain_price, int coin_price);

int main(void)
{
    int price;        /* 商品の金額 */
    int remain_price; /* おつり */
    int coin_price;
    int count;

    /* 商品の金額 */
    printf("金額(1-9999) > ");
    scanf("%d", &price);

    if (price < 1 || price > 9999)
    {
        printf("入力した金額が範囲内に収まっていません。\n");
        return 1;
    }

    /* おつりの計算 */
    remain_price = BASE_PRICE - price;

    /* 結果表示 */
    coin_price = 2000;
    count = refund_coin_count(remain_price, coin_price);
    remain_price -= coin_price * count;
    if (count > 0)
    {
        printf("%d円： %d枚\n", coin_price, count);
    }

    coin_price = 500;
    count = refund_coin_count(remain_price, coin_price);
    remain_price -= coin_price * count;
    if (count > 0)
    {
        printf("%d円： %d枚\n", coin_price, count);
    }

    coin_price = 100;
    count = refund_coin_count(remain_price, coin_price);
    remain_price -= coin_price * count;
    if (count > 0)
    {
        printf("%d円： %d枚\n", coin_price, count);
    }

    coin_price = 50;
    count = refund_coin_count(remain_price, coin_price);
    remain_price -= coin_price * count;
    if (count > 0)
    {
        printf("%d円： %d枚\n", coin_price, count);
    }

    coin_price = 10;
    count = refund_coin_count(remain_price, coin_price);
    remain_price -= coin_price * count;
    if (count > 0)
    {
        printf("%d円： %d枚\n", coin_price, count);
    }

    coin_price = 5;
    count = refund_coin_count(remain_price, coin_price);
    remain_price -= coin_price * count;
    if (count > 0)
    {
        printf("%d円： %d枚\n", coin_price, count);
    }

    coin_price = 1;
    count = refund_coin_count(remain_price, coin_price);
    remain_price -= coin_price * count;
    if (count > 0)
    {
        printf("%d円： %d枚\n", coin_price, count);
    }

    return 0;
}

int refund_coin_count(int remain_price, int coin_price)
{
    return remain_price / coin_price;
}
