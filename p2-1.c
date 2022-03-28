#include <stdio.h>
#define MAX_SIZE 100
float sum(float [], int);
float input[MAX_SIZE], answer;
int i;
void main(void)
{
    printf("[----- [김민재] [2021041070] -----]\n");
    for(i=0; i < MAX_SIZE; i++) //input[0] = 0  input[1] = 1 ... input[99] =99
    input[i] = i;
/* for checking call by reference */
    printf("address of input = %p\n", input); //input의 주소
    answer = sum(input, MAX_SIZE); //input 배열의 원소들의 합을 구하는 함수 호출
    printf("The sum is: %f\n", answer); //합 출력
}
float sum(float list[], int n)
{
    printf("value of list = %p\n", list); //list는 input의 주소를 받아와 사용하므로 list(=input)의 값 출력
    printf("address of list = %p\n\n", &list); // 때문에 list와 list자체의 주소 (= &list)는 다른 주소를 가짐
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
    tempsum += list[i]; //input[0] + input[1] + ... input[99]
    return tempsum;
}