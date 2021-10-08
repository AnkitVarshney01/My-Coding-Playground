#include <stdio.h>
#include <string.h>
#define size 100
struct stack
{
    char arr[size];
    int top;
};

void push(struct stack *s, char x)
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

char pop(struct stack *s)
{
    char x;
    if (s->top == -1)
    {
        x = ' ';
    }
    else
    {
        x = s->arr[s->top];
        s->top = s->top - 1;
    }
    return x;
}

int main()
{
    struct stack s;
    char word[size];
    printf("Input string: ");
    gets(word);
    s.top = -1;
    int l = strlen(word);
    int pushLength, popLength;
    if (l % 2 == 0)
        pushLength = popLength = l / 2;
    else
    {
        pushLength = (l / 2);
        popLength = (l / 2) + 1;
    }

    for (int i = 0; i < pushLength; i++)
    {
        push(&s, word[i]);
    }

    for (int i = popLength; i <= l; i++)
    {
        char x = pop(&s);
        
        if (word[i] == '\0')
        {
            if (s.top == -1)
            {
                printf("Given input is a Pallindrome.");
            }
            else
            {
                printf("The input is not a pallindrome.");
            }
        }
        else if (x != word[i])
        {
            printf("The input is not a pallindrome.");
            break;
        }
    }

    return 0;
}