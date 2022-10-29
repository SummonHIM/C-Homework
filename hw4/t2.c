#include <stdio.h>

int main()
{
    float iptA, iptB, iptC;
    printf("键入数组，数组上限为3，使用半角空格分隔：");
    scanf("%f,%f,%f", &iptA, &iptB, &iptC);
    printf("数组内容：[%f, %f, %f]\n", iptA, iptB, iptC);
    if (iptA - iptB <= 0 && iptA - iptC <= 0)
    {
        printf("最小值为：%f", iptA);
    }
    else if (iptB - iptC <= 0)
    {
        printf("最小值为：%f", iptB);
    }
    else
    {
        printf("最小值为：%f", iptC);
    }
}