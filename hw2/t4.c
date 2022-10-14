#include <stdio.h>

int main()
{
    float sum, avg, classA, classB, classC, classD, classE;
    printf("键入五门科目成绩，使用半角逗号分隔：");
    scanf("%f,%f,%f,%f,%f", &classA, &classB, &classC, &classD, &classE);
    sum = classA + classB + classC + classD + classE;
    avg = (classA + classB + classC + classD + classE) / 5;
    printf("总和为：%f，平均为：%f", sum, avg);
}