#include <stdio.h>

int main(void)
{
    int score;
    char rank;
    printf("0から100点までの得点を整数で入力してください。> ");
    scanf("%d", &score);

    if (score >= 90) {
        rank = 'S';
    } else if (score < 90 && score >= 80) {
        rank = 'A';
    } else if (score < 80 && score >= 70) {
        rank = 'B';
    } else if (score < 70 && score >= 60) {
        rank = 'C';
    } else {
        rank = 'D';
    }
    printf("あなたの成績は%cです。\n", rank);
    return 0;
}