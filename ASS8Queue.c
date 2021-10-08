#include <stdio.h>
#define size 100
struct queue
{
    int arr[size];
    int rear, front;
};

void enqueue(struct queue *q, int x)
{
    if (q->rear == size - 1)
    {
        printf("Queue is full!\n");
    }
    else if (q->front == -1 && q->rear == -1)
    {
        q->front = q->front + 1;
        q->rear = q->rear + 1;
        q->arr[q->rear] = x;
    }
    else
    {
        q->rear = q->rear + 1;
        q->arr[q->rear] = x;
    }
}

int dequeue(struct queue *q)
{
    int x;
    if (q->front == -1)
    {
        printf("Queue is empty.\n");
        x = -1;
    }
    else if (q->front == q->rear)
    {
        x = q->arr[q->front];
        q->front = q->rear = -1;
    }
    else
    {
        x = q->arr[q->front];
        q->front = q->front + 1;
    }
    return x;
}

void display(struct queue q)
{
    if (q.front == -1)
    {
        printf("Queue is empty!\n");
    }
    else
    {
        int i = q.front;
        while (i != q.rear + 1)
        {
            printf("%d ", q.arr[i]);
            i++;
        }
    }
    printf("\n");
}
int main()
{
    struct queue q;
    q.rear = q.front = -1;
    int n, x;
    do
    {
        printf("1.Enqueue\n2.Dequeue\n3.Display Queue\n4.Exit\nEnter your choice: ");

        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("Enter no: ");
            scanf("%d", &x);
            enqueue(&q, x);
            break;
        case 2:
            x = dequeue(&q);
            if (x != -1)
                printf("No deleted is %d\n", x);
            break;
        case 3:
            display(q);
            break;
        case 4:
            printf("Exiting....\n");
            break;

        default:
            printf("Error!!!!\n");
            break;
        }
    } while (n != 4);

    return 0;
}