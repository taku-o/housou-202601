#include <stdio.h>

int main(void)
{
    int age;

    printf("今、何歳ですか？> ");
    scanf("%d", &age);

    printf("5年後には%d歳です。\n", age + 5);

    return 0;
}