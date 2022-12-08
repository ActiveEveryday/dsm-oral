#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct stack
{
    int top,size,*arr;
}stack;

int isEmpty(stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(stack *ptr)
{
    if (ptr->top == ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(stack *ptr,int val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow\n");
    }
    else
    {
        int value;
        value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}

void display(stack *sp)
{
    if (isEmpty(sp))
    {
        printf("Stack doesn't have any element to display\n");
    }
    else
    {
        for (int i = sp->top; i >= 0; i--)
        {
            printf("%d ",sp->arr[i]);
        }
    }
}

void main()
{
    printf("Enter the size of the stack : ");
    stack *sp = (stack *) malloc(sizeof(stack));
    sp->top = -1;
    scanf("%d",&sp->size);
    sp->arr = (int *) malloc(sp->size * sizeof(int));
}