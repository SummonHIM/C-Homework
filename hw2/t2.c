#include<stdio.h>

int main() {
    int a;
    a=5;
    printf("结果为：%d\n", a+=a*=a/=a-6);
}