#include <stdio.h>
#define Count 5

int main() {
    int i, ipt[Count], min, whomin;
    for (i = 0; i < Count; i++) {
        printf("�������� %d��", i + 1);
        scanf("%d", &ipt[i]);
        if (i == 1) {
            min = ipt[i];
        }
        if (ipt[i] < min) {
            min = ipt[i];
            whomin = i;
        }
    }
    printf("��С��Ϊ��%d��������Ԫ�أ�%d", min, whomin);
}