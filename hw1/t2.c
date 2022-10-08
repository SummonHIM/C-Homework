#include<stdio.h>

int main ()
{
    printf("键入数字A，运算符和数字B（例：40+60）：\n");
    float numA, numB, numCst;
    char op;
    scanf("%f%c%f", &numA, &op, &numB);
    if (op=='+')
    {
        numCst=numA+numB;
    }
    else if (op=='-')
    {
        numCst=numA-numB;
    }
    else if (op=='*')
    {
        numCst=numA*numB;
    }
    else if (op=='/')
    {
        numCst=numA/numB;
    };
    printf("结果：%f", numCst);
}