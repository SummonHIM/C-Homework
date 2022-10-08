#include<stdio.h>

int main ()
{
    printf("键入边长：");
    float numA, numCst;
    scanf("%f", &numA);
    numCst=numA*4;
    printf("结果：%f\n", numCst);
}