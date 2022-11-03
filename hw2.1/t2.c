#include <stdio.h>

int main()
{
    char iptStr, optStr;
    printf("键入任意字符：");
    scanf("%c", &iptStr);
    if ( iptStr > 65 && iptStr < 91 )
    {
        optStr = iptStr + 32;
        printf("大写字母 %c 对应的小写字母为：%c\n", iptStr, optStr);
    }
    else if ( iptStr > 96 && iptStr < 123 )
    {
        optStr = iptStr - 32;
        printf("小写字母 %c 对应的大写字母为：%c\n", iptStr, optStr);
    }
    else
    {
        printf("该字符不是英语字母。\n");
    }
    //Lows = Caps + 32;
    //printf("大写字母 %c 对应的小写字母为：%c\n", Caps, Lows);
}
