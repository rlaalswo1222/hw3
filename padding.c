#include <stdio.h>
struct student {
    
char lastName[13]; /* 13 bytes */
int studentId; /* 4 bytes */
short grade; /* 2 bytes */
};
int main()
{
    printf("[----- [김민재] [2021041070] -----]\n");
struct student pst;
printf("size of student = %ld\n", sizeof(struct student)); //padding에 의해 13 +(3) + 4 + 2 + (2) = 24
printf("size of int = %ld\n", sizeof(int)); //int 형의 크기 출력
printf("size of short = %ld\n", sizeof(short)); //short 형의 크기 출력
return 0;
}