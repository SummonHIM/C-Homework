#include <stdio.h>

int main()
{
    char Caps, Lows;
    printf("键入大写字母：");
    scanf("%c", &Caps);
    Lows = Caps + 32;
    printf("大写字母 %c 对应的小写字母为：%c\n", Caps, Lows);
}