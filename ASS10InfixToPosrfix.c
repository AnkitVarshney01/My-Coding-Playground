#include <stdio.h>
#include <stdbool.h>
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
        x = '0';
    }
    else
    {
        x = s->arr[s->top];
        s->top = s->top - 1;
    }
    return x;
}

bool operand(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return true;
    else
        return false;
}

bool operator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '(' || c == '^')
        return true;
    else
        return false;
}

int inStackPriority(char c)
{
    int p;
    switch (c)
    {
    case '^':
        p = 4;
        break;
    case '*':
    case '/':
    case '%':
        p = 3;
        break;
    case '+':
    case '-':
        p = 2;
        break;
    case '(':
        p = 1;
        break;
    case '$':
        p = 0;
        break;
    default:
        break;
    }
    return p;
}

int incomingPriority(char c)
{
    int p;
    switch (c)
    {
    case '^':
        p = 4;
        break;
    case '*':
    case '/':
    case '%':
        p = 3;
        break;
    case '+':
    case '-':
        p = 2;
        break;

    case '(':
        p = 5;
        break;

    default:
        break;
    }
    return p;
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
        printf("%c ", s.arr[i]);
        i--;
    }
    printf("\n");
}

int main()
{
    struct stack s;
    s.top = -1;
    char inFix[size], postFix[size];
    printf("Enter Infix expression: ");
    scanf("%s", inFix);
    printf("%s\n", inFix);
    int k = 0, countS = 0, countE = 0;
    while (inFix[k] != '$')
    {
        if (inFix[k] == '(')
            countS++;
        else if (inFix[k] == ')')
            countE++;
        k++;
    }

    char x, temp;
    int i = 0, j = 0;
    push(&s, '$');
    int length = strlen(inFix);
    if (((operand(inFix[0]) && operand(inFix[length - 2])) || ((!operator(inFix[0]) || inFix[0] == '(') && (!operator(inFix[length - 2]) || inFix[length - 2] == ')'))) && countS == countE)
        while (inFix[i] != '$')
        {
            if (operand(inFix[i]))
            {
                if (i - 1 >= 0 && operand(inFix[i - 1]))
                {
                    printf("Invalid Infix expression as it has consecutive operands.\n");
                    return 0;
                }
                else
                    postFix[j++] = inFix[i];
            }
            else if (inFix[i] == ')')
            {
                while (s.arr[s.top] != '(')
                {
                    postFix[j++] = pop(&s);
                }
                temp = pop(&s);
            }
            else if (operator(inFix[i]))
            {
                if (i - 1 >= 0 && operator(inFix[i - 1]) && inFix[i] != '(' && inFix[i] != ')')
                {
                    printf("Invalid Infix expression as it has consecutive operators.\n");
                    return 0;
                }
                else
                    while (inStackPriority(s.arr[s.top]) >= incomingPriority(inFix[i]))
                    {
                        postFix[j++] = pop(&s);
                    }
                push(&s, inFix[i]);
            }
            else
            {
                printf("Given input doesn't contain valid infix characters.\n");
                return 0;
            }
            i++;
        }
    else
    {
        printf("Invalid Infix expression.\n");
        return 0;
    }

    while (s.top >= 0)
    {
        postFix[j++] = pop(&s);
    }
    postFix[j] = '\0';

    printf("Postfix expression is : %s\n", postFix);

    return 0;
}