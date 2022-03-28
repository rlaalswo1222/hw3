#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("[----- [김민재] [2021041070] -----]\n");
int list[5];
int *plist[5];
list[0] = 10;
list[1] = 11;
plist[0] = (int*)malloc(sizeof(int));
printf("list[0] \t= %d\n", list[0]); //list[0]의 값 출력
printf("address of list \t= %p\n", list); //list의 주소 출력
printf("address of list[0] \t= %p\n", &list[0]);//list[0]의 주소 출력
printf("address of list + 0 \t= %p\n", list+0); //list[0]의 주소출력
printf("address of list + 1 \t= %p\n", list+1); //list[1]의 주소출력
printf("address of list + 2 \t= %p\n", list+2); //list[2]의 주소출력
printf("address of list + 3 \t= %p\n", list+3); //list[3]의 주소출력
printf("address of list + 4 \t= %p\n", list+4); //list[4]의 주소출력
printf("address of list[4] \t= %p\n", &list[4]); //list[4]의 주소출력
free(plist[0]);
}