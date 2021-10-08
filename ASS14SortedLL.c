#include <stdio.h>
#include <stdlib.h>
struct node
{
    int value;
    struct node *next;
};

struct node *getnewnode()
{
    struct node *r;
    r = malloc(sizeof(struct node));
    return (r);
}

void delete (struct node **s)
{
    free(*s);
    return;
}

void Insert(struct node **s, int x)
{
    struct node *p, *q;
    q = malloc(sizeof(struct node));
    q->value = x;
    if (*s == NULL)
    {
        *s = q;
        q->next = NULL;
    }
    else if (x < (*s)->value)
    {
        q->next = *s;
        *s = q;
    }
    else
    {
        p = *s;
        while (p->next != NULL && p->next->value <= x)
        {
            p = p->next;
        }
        q->next = p->next;
        p->next = q;
    }
}

void deleteNode(struct node **s, int x)
{
    struct node *p, *q;
    if (*s == NULL)
        return;

    p = NULL;
    q = *s;
    while (q != NULL && q->value != x)
    {
        p = q;
        q = q->next;
    }
    if (p == NULL)
    {
        *s = q->next;
        delete (&q);
    }
    else if (q != NULL)
    {
        p->next = q->next;
        delete (&q);
    }
}

int search(struct node *s, int x)
{
    struct node *p;
    if (s == NULL)
        return 0;
    p = s;
    while (p != NULL && p->value != x)
        p = p->next;
    if (p != NULL)
        return 1;
    else
        return 0;
}

void display(struct node *s)
{
    if (s == NULL)
        printf("List is empty");
    else
    {
        struct node *p;
        p = s;
        while (p != NULL)
        {
            printf("%d ", p->value);
            p = p->next;
        }
    }
    printf("\n");
}

int main()
{
    struct node *start;
    int x, y, choice;
    start = NULL;
    do
    {
        printf("1. Insert a value.\n");
        printf("2. Delete a node.\n");
        printf("3. Search x in linked list.\n");
        printf("4. Display list.\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter value to be inserted: ");
            scanf("%d", &x);
            Insert(&start, x);
            break;
        case 2:
            printf("Enter value to be deleted: ");
            scanf("%d", &x);
            deleteNode(&start, x);
            break;
        case 3:
            printf("Enter value to be searched: ");
            scanf("%d", &x);
            if (search(start, x) == 1)
                printf("%d is present in the list.\n");
            else
                printf("%d is not found.\n");
            break;
        case 4:
            display(start);
            break;
        case 5:
            printf("Exiting...\n");
            break;
        default:
            printf("Wrong choice.\n");
            break;
        }
    } while (choice != 5);
    return 0;
}