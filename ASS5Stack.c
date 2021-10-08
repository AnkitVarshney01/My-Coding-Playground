#include <stdio.h>
#define size 100
struct stack
{
    int arr[size];
    int top;
};

void push(struct stack *s, int x)
{
    if (s->top == size - 1)
    {
        printf("Stack is full!\n");
    }
    else
    {
        s->top = s->top + 1;
        s->arr[s->top] = x;
    }
}

int pop(struct stack *s)
{
    int x;
    if (s->top == -1)
    {
        printf("Stack is empty.\n");
        x = -1;
    }
    else
    {
        x = s->arr[s->top];
        s->top = s->top - 1;
    }
    return x;
}

void display(struct stack s)
{
    if (s.top == -1)
    {
        printf("Stack is empty!\n");
    }
    int i = s.top;
    while (i != -1)
    {
        printf("%d ", s.arr[i]);
        i--;
    }
    printf("\n");
}
int main()
{
    struct stack s;
    s.top = -1;
    int n, x;
    do
    {
        printf("1.Push\n2.Pop\n3.Display Stack\n4.Exit\nEnter your choice: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("Enter no: ");
            scanf("%d", &x);
            push(&s, x);
            break;
        case 2:
            x = pop(&s);
            if (x != -1)
                printf("No deleted is %d\n", x);
            break;
        case 3:
            display(s);
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