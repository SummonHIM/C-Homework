#include <stdio.h>

int main()
{
    float ipt, abs;
    printf("键入任意数：");
    scanf("%f", &ipt);
    if (ipt > 0)
    {
        abs = ipt;
    }
    else
    {
        abs = -ipt;
    }
    printf("该数的绝对值为：%f", abs);
}