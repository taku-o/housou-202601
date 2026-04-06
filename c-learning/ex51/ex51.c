#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c;
    printf("文字を入力してください。 > ");
    scanf("%c", &c);

    printf("%cを大文字にすると%cです。\n", c, toupper(c));
    return 0;
}
