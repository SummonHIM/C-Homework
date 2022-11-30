#include <stdio.h>
#define Count 5

int main() {
    float ipt[Count], sum = 0, avg;
    int i;
    for (i = 0; i < Count; i++) {
        printf("键入 %d 号学生成绩：", i + 1);
        scanf("%f", &ipt[i]);
        sum += ipt[i];
    }
    avg = sum / Count;
    for (i = 0; i < Count; i++) {
        printf("%d 号学生的成绩为：%.2f\n", i + 1, ipt[i]);
    }
    printf("总和为：%.2f\n", sum);
    printf("平均为：%.2f\n", avg);
}