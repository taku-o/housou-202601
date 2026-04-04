#include <stdio.h>

int main(void)
{
    int height;
    int age;
    printf("身長を入力してください。> ");
    scanf("%d", &height);
    printf("年齢を入力してください。> ");
    scanf("%d", &age);
    if (age >= 8 || (age >=6 && height >= 120)) {
        printf("あなたはジェットコースターに乗れます。\n");
    } else {
        printf("あなたはジェットコースターに乗れません。\n");
    }
    return 0;
}