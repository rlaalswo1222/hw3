#include <stdio.h>
struct student1 {
char lastName;
int studentId;
char grade;
};
typedef struct {
char lastName;
int studentId;
char grade;
} student2;
int main() {
    printf("[----- [김민재] [2021041070] -----]\n");
struct student1 st1 = {'A', 100, 'A'}; //st1.lastname = A , st1.studentID = 100 , st1.grade = A
printf("st1.lastName = %c\n", st1.lastName);
printf("st1.studentId = %d\n", st1.studentId);
printf("st1.grade = %c\n", st1.grade);
student2 st2 = {'B', 200, 'B'}; //st2.lastname = B , st2.studentID = 200 , st2.grade = B
printf("\nst2.lastName = %c\n", st2.lastName);
printf("st2.studentId = %d\n", st2.studentId);
printf("st2.grade = %c\n", st2.grade);
student2 st3;
st3 = st2; //구조 치환
printf("\nst3.lastName = %c\n", st3.lastName);
printf("st3.studentId = %d\n", st3.studentId);
printf("st3.grade = %c\n", st3.grade);
/* equality test */
if(st3 == st2) /* not working  전체구조의 동등성 검사는 이렇게 할 수 없음*/
printf("equal\n");
else
printf("not equal\n");
return 0;
}