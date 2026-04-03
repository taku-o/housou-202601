#include <stdio.h>

int main(void)
{
    int date;
    printf("日を入力してください。> ");
    scanf("%d", &date);

    if (date % 10 == 5) {
        printf("%d日は特売日です。\n", date);
    } else {
        printf("%d日は特売日ではありません。\n", date);
    }
    return 0;
}