#include<stdio.h>
#define max 5
int stack[max];
int top=-1;

void PUSH(int element)
{
    if (top==max-1)
    {printf("stack overflow\n");}
    else
    {top=top+1;
    stack[top]=element;
    printf("Element inserted successfully\n");}
}

int main()
{
    PUSH(10);
    PUSH(20);
    PUSH(30);
    PUSH(40);
    PUSH(50);
    return 0;
}