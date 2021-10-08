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

void pop(struct stack *s)
{
    if (s->top == -1)
    {
        return;
    }
    else
    {
        s->top = s->top - 1;
    }
}

int main()
{
    struct stack s;
    char paranthesis[size];
    printf("Input string: ");
    gets(paranthesis);
    s.top = -1;
    int l = strlen(paranthesis);
    for (int i = 0; i <= l; i++)
    {
        if (paranthesis[i] == '(')
        {
            push(&s, paranthesis[i]);
        }
        else if (paranthesis[i] == ')')
        {
            pop(&s);
        }
        else if (paranthesis[i] == '\0')
        {
            if (s.top == -1)
            {
                printf("Paranthesis are balanced.");
            }
            else
            {
                printf("Paranthesis are not balanced.");
            }
        }
        else
        {
            printf("Invalid Input.");
            break;
        }
    }

    return 0;
}