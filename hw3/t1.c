#include<stdio.h>

int main() {
    int ipt, rem;
    printf("键入任意整数：");
    scanf("%d", &ipt);
    rem = ipt % 2;
    if (rem == 0) {
        printf("偶数");
    } else {
        printf("奇数");
    }
}