#include <stdio.h>

int main(void)
{
    int height;
    int weight;
    printf("身長を入力してください。(cm) > ");
    scanf("%d", &height);
    printf("体重を入力してください。(kg) > ");
    scanf("%d", &weight);
    printf("BMIは%fです\n", weight / (((double)height / 100) * ((double)height/ 100)));
    return 0;
}