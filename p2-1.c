#include <stdio.h>
#define MAX_SIZE 100
float sum(float [], int);
float input[MAX_SIZE], answer;
int i;
void main(void)
{
    printf("[----- [�����] [2021041070] -----]\n");
    for(i=0; i < MAX_SIZE; i++) //input[0] = 0  input[1] = 1 ... input[99] =99
    input[i] = i;
/* for checking call by reference */
    printf("address of input = %p\n", input); //input�� �ּ�
    answer = sum(input, MAX_SIZE); //input �迭�� ���ҵ��� ���� ���ϴ� �Լ� ȣ��
    printf("The sum is: %f\n", answer); //�� ���
}
float sum(float list[], int n)
{
    printf("value of list = %p\n", list); //list�� input�� �ּҸ� �޾ƿ� ����ϹǷ� list(=input)�� �� ���
    printf("address of list = %p\n\n", &list); // ������ list�� list��ü�� �ּ� (= &list)�� �ٸ� �ּҸ� ����
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
    tempsum += list[i]; //input[0] + input[1] + ... input[99]
    return tempsum;
}