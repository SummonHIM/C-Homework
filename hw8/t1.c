#include <stdio.h>
#define Count 5

int main() {
    float ipt[Count], sum = 0, avg;
    int i;
    for (i = 0; i < Count; i++) {
        printf("���� %d ��ѧ���ɼ���", i + 1);
        scanf("%f", &ipt[i]);
        sum += ipt[i];
    }
    avg = sum / Count;
    for (i = 0; i < Count; i++) {
        printf("%d ��ѧ���ĳɼ�Ϊ��%.2f\n", i + 1, ipt[i]);
    }
    printf("�ܺ�Ϊ��%.2f\n", sum);
    printf("ƽ��Ϊ��%.2f\n", avg);
}