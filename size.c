#include<stdio.h>
#include<stdlib.h>
void main()
{
    printf("[----- [�����] [2021041070] -----]\n");
int **x;
printf("sizeof(x) = %lu\n", sizeof(x)); //�ּҸ� �����ϱ� ������ 8����Ʈ
printf("sizeof(*x) = %lu\n", sizeof(*x)); // �ּҸ� �����ϱ� ������ 8����Ʈ
printf("sizeof(**x) = %lu\n", sizeof(**x)); // ���� �����ϱ� ������ 4����Ʈ
}