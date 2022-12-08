#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct queue *ptr)
{
    return ptr->f > ptr->r ? 1 : 0;
}
int isFull(struct queue *ptr)
{
    return ptr->r == ptr->size - 1 ? 1 : 0;
}
void enqueue(struct queue *ptr, int value)
{
    isFull(ptr) ? printf("Queue Overflow\n") : ptr->r++, ptr->arr[ptr->r] = value;
    if (ptr->f == -1)
    {
        ptr->f++;
    }
}

int dequeue(struct queue *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Queue Underflow\n");
    }
    else
    {
        int value;
        value = ptr->arr[ptr->f];
        ptr->f++;
        return value;
    }
}

void display(struct queue *ptr)
{

    if (isEmpty(ptr))
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("Queue: \n");
        for (int i = ptr->f; i <= ptr->r; i++)
        printf("%d ", ptr->arr[i]);
    }
}
void main()
{
    struct queue *qp = (struct queue *)malloc(sizeof(struct queue));
    qp->f = qp->r = -1;
    printf("Enter the size of queue : ");
    scanf("%d", &qp->size);
    qp->arr = (int *)malloc(qp->size * sizeof(struct queue));
    enqueue(qp, 10);
    enqueue(qp, 20);
    dequeue(qp);
    dequeue(qp);
}