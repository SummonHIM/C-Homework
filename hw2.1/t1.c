#include <stdio.h>

int main()
{
    float sum, avg, classA, classB, classC;
    printf("键入三门科目成绩，使用半角逗号分隔：");
    scanf("%f,%f,%f", &classA, &classB, &classC);
    sum = classA + classB + classC;
    avg = (classA + classB + classC) / 3;
    printf("总和为：%f，平均为：%f", sum, avg);
}
