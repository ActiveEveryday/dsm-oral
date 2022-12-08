#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct queue
{
    int f, r, size, *arr;
};

int isFull(struct queue *q){
    if((q->r+1)%q->size == q->f){
        return 1;
    }
    return 0;
}

int isEmpty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val){
    if(isFull(q)){
        printf("This Queue is full");
    }
    else{
        q->r = (q->r +1)%q->size;
        q->arr[q->r] = val; 
        printf("Enqued element: %d\n", val);
    }
}

int dequeue(struct queue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("This Queue is empty");
    }
    else{
        q->f = (q->f +1)%q->size;
        a = q->arr[q->f]; 
    }
    return a;
}

void display(struct queue *ptr)
{
    if (isFull(ptr))
    {
        printf("Queue Underflow\n");
    }
    else
    {
        if (ptr->r >= ptr->f)
        {
            for (int i = ptr->f; i <= ptr->r; i++)
                printf("%d ", ptr->arr[i]);
        }
        else
        {
            for (int i = ptr->f; i < ptr->size; i++)
                printf("%d ", ptr->arr[i]);

            for (int i = 0; i <= ptr->r; i++)
                printf("%d ", ptr->arr[i]);
        }
    }
}

void main()
{
    printf("Enter the size of the queue : ");
    struct queue *qp = (struct queue *) malloc(sizeof(struct queue));
    qp->r = qp->f = 0;
    scanf("%d",&qp->size);
    qp->arr = (int *) malloc(qp->size * sizeof(int));

    enqueue(qp,10);
    enqueue(qp,10);
    enqueue(qp,10);
}