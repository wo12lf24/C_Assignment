/*
Assignment12-4
학번:2019202003
이름:김주형
*/
#include <stdio.h>
#define MAX 100000

int stack[MAX];
int top = -1;

void push(int data)
{
    if (top >= MAX - 1)
        return;
    stack[++top] = data;
}
void pop()
{
    if (top < 0)
        return;
    stack[top--] = 0;
}
int main()
{
    int K, data, sum = 0;
    printf("입력할 수의 개수 :");
    scanf("%d", &K);

    while (K--)
    {
        printf("정수 :");
        scanf("%d", &data);
        if (data == 0)
            pop();
        else
            push(data);
    }
    for (int i = 0; i <= top; i++)
    {
        sum += stack[i];
    }
    printf("합 : %d\n", sum);
    return 0;
}