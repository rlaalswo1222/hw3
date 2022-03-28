#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("[----- [김민재] [2021041070] -----]\n");
int list[5];
int *plist[5] = {NULL,};
plist[0] = (int *)malloc(sizeof(int));
list[0] = 1;
list[1] = 100;
*plist[0] = 200;
printf("value of list[0] = %d\n", list[0]); // list[0]의 값 출력
printf("address of list[0] = %p\n", &list[0]); //list[0]의 주소 출력
printf("value of list = %p\n", list); // list의 값 출력
printf("address of list (&list) = %p\n", &list); // list의 주소출력 
printf("----------------------------------------\n\n");
printf("value of list[1] = %d\n", list[1]); // list[1]의 값 출력
printf("address of list[1] = %p\n", &list[1]); // list[1]의 주소 출력
printf("value of *(list+1) = %d\n", *(list + 1)); // *(list + 1) = list[1]의 값 출력
printf("address of list+1 = %p\n", list+1); //list+1 = list[1]의 주소 출력
printf("----------------------------------------\n\n");
printf("value of *plist[0] = %d\n", *plist[0]); // plist[0] 의 값 출력
printf("&plist[0] = %p\n", &plist[0]); // plist[0]의 주소 출력
printf("&plist = %p\n", &plist);// plist의 주소 출력
printf("plist = %p\n", plist); // plist 출력
printf("plist[0] = %p\n", plist[0]); // plist[0] 즉, 값 200이 담겨있는 곳의 주소 출력
printf("plist[1] = %p\n", plist[1]); 
printf("plist[2] = %p\n", plist[2]);
printf("plist[3] = %p\n", plist[3]);
printf("plist[4] = %p\n", plist[4]); // int *plist[5] = {NULL,}로 초기화해놓았기때문에 나머지는 모두 NULL
free(plist[0]);
}