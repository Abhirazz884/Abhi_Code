#include<stdio.h>
int stack();
int top=0;
void pop();
{
    if (top==-1)
    {printf("Element underflow");}
    else
    {printf("deleted element");
    stack[top];
    top=top-1;}
}
int main()
{
    stack[0]=10;    pop();
    stack[1]=20;    pop();
    stack[2]=30;    pop();
    stack[3]=40;    pop();
    stack[4]=50;    pop();
    return 0;
}