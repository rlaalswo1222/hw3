#include<stdio.h>
#include<stdlib.h>
void main()
{
    printf("[----- [김민재] [2021041070] -----]\n");
int **x;
printf("sizeof(x) = %lu\n", sizeof(x)); //주소를 저장하기 때문에 8바이트
printf("sizeof(*x) = %lu\n", sizeof(*x)); // 주소를 저장하기 때문에 8바이트
printf("sizeof(**x) = %lu\n", sizeof(**x)); // 값을 저장하기 때문에 4바이트
}