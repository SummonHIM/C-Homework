#include<stdio.h>

int main ()
{
    printf("��������A�������������B������40+60����\n");
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
    printf("�����%f", numCst);
}