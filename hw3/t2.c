#include <stdio.h>

int main()
{
    char iptStr, optStr;
    printf("键入任意一字符：");
    scanf("%c", &iptStr);
    if (iptStr > 65 && iptStr < 91)
    {
        optStr = iptStr + 32;
        printf("大写字母。\n", iptStr, optStr);
    }
    else if (iptStr > 96 && iptStr < 123)
    {
        optStr = iptStr - 32;
        printf("小写字母。\n", iptStr, optStr);
    }
    else if (iptStr > 126 || iptStr < 0)
    {
        printf("该字符不为ASCII字符。\n");
    }
    else
    {
        printf("该字符不是英语字母。\n");
    }
}