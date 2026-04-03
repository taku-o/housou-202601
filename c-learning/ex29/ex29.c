#include <stdio.h>

int main(void)
{
    char head;
    printf("出身都道府県の頭文字を英文字一文字で入力してください。 > ");
    scanf("%c", &head);

    if (head == 'e' || head == 'E') {
        printf("あなたは愛知県出身ですね。\n");
    }
    if (head == 'w' || head == 'W') {
        printf("あなたは和歌山県出身ですね。\n");
    }
    return 0;
}