#include <stdio.h>
#define Count 5

int main() {
    int i, ipt[Count], min, whomin;
    for (i = 0; i < Count; i++) {
        printf("键入数组 %d：", i + 1);
        scanf("%d", &ipt[i]);
        if (i == 1) {
            min = ipt[i];
        }
        if (ipt[i] < min) {
            min = ipt[i];
            whomin = i;
        }
    }
    printf("最小数为：%d，其数组元素：%d", min, whomin);
}