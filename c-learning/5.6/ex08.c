#include <stdio.h>

int main(void)
{
    int score = 85;
    char grade = 'A';
    double pi = 3.14159;
    int chance = 30;

    printf("得点は%d点、評価は\"%c\"です。\n", score, grade);
    printf("円周率として%.2fか%.3fを使って計算してください。\n", pi, pi);
    printf("降水確率は%d%%です。\n", chance);
    return 0;
}