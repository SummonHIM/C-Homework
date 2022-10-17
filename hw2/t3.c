#include <stdio.h>

int main()
{
    int a = 6, a1, a2, a3, a4;
    ++a;
    printf("前缀自加结果：%d \n", a);
    a = 6; a++;
    printf("后缀自加结果：%d \n", a);
    a = 6; --a;
    printf("前缀自减结果：%d \n", a);
    a = 6; a--;
    printf("后缀自减结果：%d \n", a);
}