#include <stdio.h>
#include <stdlib.h>

struct poly
{
    float coeff;
    int exp;
    struct poly *next;
};

typedef struct poly polynomial;

void poly_inp(polynomial **s)
{
    int size;
    polynomial *p, *q;
    printf("Input number of distinct terms in polynomial: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        q = malloc(sizeof(polynomial));
        q->next = NULL;
        printf("Enter power and coefficient: ");
        scanf("%d", &(q->exp));
        scanf("%f", &(q->coeff));
        if (*s == NULL)
            *s = q;
        else
        {
            p = *s;
            while (p->next != NULL)
            {
                p = p->next;
            }
            p->next = q;
        }
    }
}

void output(polynomial *s)
{
    polynomial *q;
    q = s;
    if (q == NULL)
        printf("0");
    while (q != NULL)
    {
        if (q->next == NULL)
            printf("(%.2f)x^%d", q->coeff, q->exp);
        else
            printf("(%.2f)x^%d+", q->coeff, q->exp);
        q = q->next;
    }
    printf("\n\n");
}

polynomial *polyadd(polynomial *p1, polynomial *p2)
{
    polynomial *p3 = NULL, *p, *q;
    if (p1 == NULL)
    {
        p3 = p2;
        return p3;
    }
    else if (p2 == NULL)
    {
        p3 = p1;
        return p3;
    }
    while (p1 != NULL || p2 != NULL)
    {
        p = malloc(sizeof(polynomial));
        p->next = NULL;
        if (p1 != NULL && p2 != NULL)
        {
            if (p1->exp == p2->exp)
            {
                p->coeff = p1->coeff + p2->coeff;
                p->exp = p1->exp;
                p1 = p1->next;
                p2 = p2->next;
            }
            else if (p1->exp > p2->exp)
            {
                p->coeff = p1->coeff;
                p->exp = p1->exp;
                p1 = p1->next;
            }
            else
            {
                p->coeff = p2->coeff;
                p->exp = p2->exp;
                p2 = p2->next;
            }
        }
        else
        {
            if (p2 == NULL)
            {
                p->coeff = p1->coeff;
                p->exp = p1->exp;
                p1 = p1->next;
            }
            else if (p1 == NULL)
            {
                p->coeff = p2->coeff;
                p->exp = p2->exp;
                p2 = p2->next;
            }
        }
        if (p3 == NULL)
            p3 = p;
        else
        {
            q = p3;
            while (q->next != NULL)
            {
                q = q->next;
            }
            q->next = p;
        }
    }
    return p3;
}

polynomial *polymult(polynomial *p1, polynomial *p2)
{
    polynomial *p3 = NULL, *p, *q, *l = NULL, *m;

    while (p1 != NULL)
    {
        p = p2;
        l = NULL;
        while (p != NULL)
        {
            q = malloc(sizeof(polynomial));
            q->coeff = p1->coeff * p->coeff;
            q->exp = p1->exp + p->exp;
            q->next = NULL;

            if (l == NULL)
            {
                l = q;
            }
            else
            {
                m = l;
                while (m->next != NULL)
                {
                    m = m->next;
                }
                m->next = q;
            }
            p = p->next;
        }
        p3 = polyadd(p3, l);
        p1 = p1->next;
    }
    return p3;
}

int main()
{
    polynomial *p1 = NULL, *p2 = NULL;
    printf("For 1st polynomial:\n");
    poly_inp(&p1);
    output(p1);
    printf("For 2nd polynomial:\n");
    poly_inp(&p2);
    output(p2);
    printf("Addition of 1st and 2nd polynomials are: \n");
    output(polyadd(p1, p2));
    printf("Multiplication of 1st and 2nd polynomials are: \n");
    output(polymult(p1, p2));
    return 0;
}
