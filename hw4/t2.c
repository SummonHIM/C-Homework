#include <stdio.h>

int main()
{
    float iptA, iptB, iptC;
    printf("�������飬��������Ϊ3��ʹ�ð�ǿո�ָ���");
    scanf("%f,%f,%f", &iptA, &iptB, &iptC);
    printf("�������ݣ�[%f, %f, %f]\n", iptA, iptB, iptC);
    if (iptA - iptB <= 0 && iptA - iptC <= 0)
    {
        printf("��СֵΪ��%f", iptA);
    }
    else if (iptB - iptC <= 0)
    {
        printf("��СֵΪ��%f", iptB);
    }
    else
    {
        printf("��СֵΪ��%f", iptC);
    }
}