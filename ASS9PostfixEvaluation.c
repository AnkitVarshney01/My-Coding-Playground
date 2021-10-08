#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define size 100

struct stack
{
    float arr[size];
    int top;
};

void push(struct stack *s, float x)
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

float pop(struct stack *s)
{
    float x;
    if (s->top == -1)
    {
        x = 0;
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

bool operator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        return true;
    else
        return false;
}

float value(char c)
{
    switch (c)
    {
    case 'a':
        return (20);
    case 'b':
        return (30);
    case 'c':
        return (4);
    case 'd':
        return (12);
    case 'e':
        return (41);
    case 'f':
        return (2);
    case 'g':
        return (6);
    case 'h':
        return (15);
    case 'i':
        return (21);
    case 'j':
        return (27);
    case 'k':
        return (31);
    case 'l':
        return (38);
    case 'm':
        return (10);
    case 'n':
        return (5);
    case 'o':
        return (16);
    case 'p':
        return (45);
    case 'q':
        return (14);
    case 'r':
        return (1);
    case 's':
        return (33);
    case 't':
        return (9);
    case 'u':
        return (39);
    case 'v':
        return (32);
    case 'w':
        return (24);
    case 'x':
        return (28);
    case 'y':
        return (46);
    case 'z':
        return (50);
    default:
        break;
    }
}

int main()
{
    struct stack s;
    s.top = -1;
    char exp[100];
    printf("Please write postfix expression: ");
    scanf("%s", exp);
    int i = 0;
    float op1, op2, result;
    while (exp[i] != '\0')
    {
        if (operand(exp[i]))
        {
            if (i == strlen(exp) - 1)
            {
                printf("Invalid Postfix Expression.\n");
                return 0;
            }
            else
                push(&s, value(exp[i]));
        }
        else if (operator(exp[i]))
        {
            if (i <= 1)
            {
                printf("Operator (%c) can't be present at %d index.\n", exp[i], i);
                printf("Hence, this expression cannot be evaluated.\n");
                return 0;
            }
            else if (s.top >= 1)
            {
                op2 = pop(&s);
                op1 = pop(&s);
                switch (exp[i])
                {
                case '+':
                    result = op1 + op2;
                    break;
                case '-':
                    result = op1 - op2;
                    break;
                case '/':
                    result = op1 / op2;
                    break;
                case '*':
                    result = op1 * op2;
                    break;
                default:
                    break;
                }
                push(&s, result);
            }
            else
            {
                printf("Invalid postfix expression as it has EXCESS operators.\n");
                return 0;
            }
        }
        else
        {
            printf("This expression contains irrelevant characters for a postfix expression.\n");
            return 0;
        }
        i++;
    }
    result = pop(&s);
    if (s.top == -1 && exp[i] == '\0')
        printf("Final answer is %f\n", result);
    else
        printf("Invalid postfix expression as it has EXCESS operands.\n");

    return 0;
}