#include <stdio.h>
struct student {
    
char lastName[13]; /* 13 bytes */
int studentId; /* 4 bytes */
short grade; /* 2 bytes */
};
int main()
{
    printf("[----- [�����] [2021041070] -----]\n");
struct student pst;
printf("size of student = %ld\n", sizeof(struct student)); //padding�� ���� 13 +(3) + 4 + 2 + (2) = 24
printf("size of int = %ld\n", sizeof(int)); //int ���� ũ�� ���
printf("size of short = %ld\n", sizeof(short)); //short ���� ũ�� ���
return 0;
}