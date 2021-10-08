#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

struct headerNode
{
    int count;
    struct node *start, *end;
};

void delete (struct node **s)
{
    free(*s);
    return;
}

void InsertFirst(struct headerNode *h, int x)
{
    struct node *q;
    q = malloc(sizeof(struct node));
    q->value = x;
    if (h->start == NULL)
    {
        h->start = q;
        h->end = q;
        h->count = 1;
        return;
    }
    q->next = h->start;
    h->start = q;
    h->count++;
}

void append(struct headerNode *h, int x)
{
    struct node *q;
    q = malloc(sizeof(struct node));
    q->value = x;
    q->next = NULL;
    if (h->start == NULL)
    {
        h->start = q;
        h->end = q;
        h->count = 1;
        return;
    }
    else
    {
        h->end->next = q;
        h->end = q;
        h->count++;
    }
}

void deletenode(struct headerNode *h, int x)
{
    struct node *p, *q;
    if (h->start == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    p = NULL;
    q = h->start;
    while (q != NULL && q->value != x)
    {
        p = q;
        q = q->next;
    }
    if (p == NULL)
    {
        h->start = q->next;
    }
    else if (q != NULL)
    {
        p->next = q->next;
    }
    delete (&q);
    h->count--;
}

int search(struct headerNode h, int x)
{
    struct node *p;
    if (h.start == NULL)
        return 0;
    p = h.start;
    while (p != NULL && p->value != x)
        p = p->next;
    if (p != NULL)
        return 1;
    else
        return 0;
}

void display(struct headerNode h)
{
    struct node *p;
    p = h.start;
    printf("No. of node/s in list is/are %d\n", h.count);
    if (p == NULL)
        printf("List is empty.\n");
    else
        while (p != NULL)
        {
            printf("%d ", p->value);
            p = p->next;
        }
    printf("\n");
}

int main()
{
    struct headerNode H;
    H.count = 0;
    H.start = NULL;
    H.end = NULL;
    struct node *start;
    int x, y, choice;
    start = NULL;
    do
    {
        printf("1. Insert at beginning.\n");
        printf("2. Insert at end.\n");
        printf("3. Delete a node.\n");
        printf("4. Search x in linked list.\n");
        printf("5. Display list.\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter value to be inserted: ");
            scanf("%d", &x);
            InsertFirst(&H, x);
            break;
        case 2:
            printf("Enter value to be inserted: ");
            scanf("%d", &x);
            append(&H, x);
            break;
        case 3:
            printf("Enter value to be deleted: ");
            scanf("%d", &x);
            deletenode(&H, x);
            break;
        case 4:
            printf("Enter value to be searched: ");
            scanf("%d", &x);
            if (search(H, x) == 1)
                printf("%d is present in the list.\n", x);
            else
                printf("%d is not found.\n", x);
            break;
        case 5:
            display(H);
            break;
        case 6:
            printf("Exiting...\n");
            break;
        default:
            printf("Wrong choice.\n");
            break;
        }
    } while (choice != 6);
    return 0;
}