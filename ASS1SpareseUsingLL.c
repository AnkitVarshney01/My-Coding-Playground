#include <stdio.h>

struct row_list
{
    int row;
    struct row_list *next_row;
    struct val_list *next_element;
};

struct val_list
{
    int col;
    int val;
    struct val_list *next;
};

void insert_node(int data, int c, struct row_list **r)
{
    struct val_list *temp, *d;
    temp = (struct val_list *)malloc(sizeof(struct val_list));
    temp->col = c;
    temp->val = data;
    temp->next = NULL;

    if ((*r)->next_element == NULL)
        (*r)->next_element = temp;
    else
    {
        d = (*r)->next_element;
        while (d->next != NULL)
            d = d->next;
        d->next = temp;
    }
}

void insert_row()

int main()
{

    return 0;
}