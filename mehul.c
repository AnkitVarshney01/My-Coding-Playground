#include <stdio.h>
#include <string.h>

int countdigits( float a)
{
    int count = 0;
    while (a != 0)
    {
        count++;
        a = (int)a / 10;
    }
    return count;
}

long int poften(int n)
{
    int i = 1, p = 1;
    while (i < n)
    {
        p *= 10;
        i++;
    }
    return p;
}

char *converttowords( float n, int x, char s[], int rem1, int rem2, int rem4, int rem5)
{
    if (x == 0)
        return s;
    long int z = poften(x);
    int quo = n / z;
    if (x == 5)
        switch (quo)
        {
        case 1:
            switch (rem4)
            {
            case 1:
                strcat(s, "eleven ");
                break;
            case 2:
                strcat(s, "twelve ");
                break;
            case 3:
                strcat(s, "thirteen ");
                break;
            case 4:
                strcat(s, "fourteen ");
                break;
            case 5:
                strcat(s, "fifteen ");
                break;
            case 6:
                strcat(s, "sixteen ");
                break;
            case 7:
                strcat(s, "seventeen ");
                break;
            case 8:
                strcat(s, "eighteen ");
                break;
            case 9:
                strcat(s, "nineteen ");
                break;
            default:
                break;
            }
            break;
        case 2:
            strcat(s, "twenty ");
            break;
        case 3:
            strcat(s, "thirty ");
            break;
        case 4:
            strcat(s, "forty ");
            break;
        case 5:
            strcat(s, "fifty ");
            break;
        case 6:
            strcat(s, "sixty ");
            break;
        case 7:
            strcat(s, "seventy ");
            break;
        case 8:
            strcat(s, "eighty ");
            break;
        case 9:
            strcat(s, "ninety ");
            break;
        default:
            break;
        }
    if (x == 2)
        switch (quo)
        {
        case 1:
            switch (rem1)
            {
            case 1:
                strcat(s, "eleven ");
                break;
            case 2:
                strcat(s, "twelve ");
                break;
            case 3:
                strcat(s, "thirteen ");
                break;
            case 4:
                strcat(s, "fourteen ");
                break;
            case 5:
                strcat(s, "fifteen ");
                break;
            case 6:
                strcat(s, "sixteen ");
                break;
            case 7:
                strcat(s, "seventeen ");
                break;
            case 8:
                strcat(s, "eighteen ");
                break;
            case 9:
                strcat(s, "nineteen ");
                break;
            default:
                break;
            }
            break;
        case 2:
            strcat(s, "twenty ");
            break;
        case 3:
            strcat(s, "thirty ");
            break;
        case 4:
            strcat(s, "forty ");
            break;
        case 5:
            strcat(s, "fifty ");
            break;
        case 6:
            strcat(s, "sixty ");
            break;
        case 7:
            strcat(s, "seventy ");
            break;
        case 8:
            strcat(s, "eighty ");
            break;
        case 9:
            strcat(s, "ninety ");
            break;
        default:
            break;
        }

    if (x == 4)
        switch (quo)
        {
        case 1:
            if (rem5 != 1)
                strcat(s, "one ");
            break;
        case 2:
            if (rem5 != 1)
                strcat(s, "two ");
            break;
        case 3:
            if (rem5 != 1)
                strcat(s, "three ");
            break;
        case 4:
            if (rem5 != 1)
                strcat(s, "four ");
            break;
        case 5:
            if (rem5 != 1)
                strcat(s, "five ");
            break;
        case 6:
            if (rem5 != 1)
                strcat(s, "six ");
            break;
        case 7:
            if (rem5 != 1)
                strcat(s, "seven ");
            break;
        case 8:
            if (rem5 != 1)
                strcat(s, "eight ");
            break;
        case 9:
            if (rem5 != 1)
                strcat(s, "nine ");
            break;
        default:
            break;
        }
    if (x == 6 || x == 3)
        switch (quo)
        {
        case 1:

            strcat(s, "one ");
            break;
        case 2:
            strcat(s, "two ");
            break;
        case 3:
            strcat(s, "three ");
            break;
        case 4:
            strcat(s, "four ");
            break;
        case 5:
            strcat(s, "five ");
            break;
        case 6:
            strcat(s, "six ");
            break;
        case 7:
            strcat(s, "seven ");
            break;
        case 8:
            strcat(s, "eight ");
            break;
        case 9:
            strcat(s, "nine ");
            break;
        default:
            break;
        }

    switch (x)
    {
    case 3:
        strcat(s, "hundred ");
        break;
    case 4:
        strcat(s, "thousand ");
        break;
    case 6:
        strcat(s, "lakhs ");
        break;
    default:
        break;
    }

    int rem = (long int)n % z;
    strcpy(s, converttowords(rem, x - 1, s, rem1, rem2, rem4, rem5));

    return s;
}

int main()
{
    double n;
    printf("Enter the amount in Ruppees: ");
    scanf("%lf", &n);

    int rem1, rem2, rem4, rem5;
    rem1 = (int)n % 10;
    rem2 = ((int)n % 100) / 10;
    rem4 = ((int)n % 10000) / 1000;
    rem5 = n / 10000;
    rem5 %= 10;

    int cdg = countdigits(n);

    char ans[100] = "Rupees ", fans[100];
    if (n != 0)
        strcpy(fans, converttowords(n, cdg, ans, rem1, rem2, rem4, rem5));
    else
        strcpy(fans, ans);

    if (rem2 != 1)
        switch (rem1)
        {
        case 1:
            strcat(fans, "one ");
            break;
        case 2:
            strcat(fans, "two ");
            break;
        case 3:
            strcat(fans, "three ");
            break;
        case 4:
            strcat(fans, "four ");
            break;
        case 5:
            strcat(fans, "five ");
            break;
        case 6:
            strcat(fans, "six ");
            break;
        case 7:
            strcat(fans, "seven ");
            break;
        case 8:
            strcat(fans, "eight ");
            break;
        case 9:
            strcat(fans, "nine ");
            break;
        default:
            strcat(fans, "zero ");
            break;
        }
    strcat(fans, "and paisa ");
    int m;
    m = (int)n;
    n = n * 100.00;
    double k;
    k = n - m*100;
    int remd1 = ((int)k % 10);
    int remd2 = ((int)k % 100) / 10;
    strcpy(fans, converttowords(k, 2, fans, remd1, remd2, 0, 0));
    if (remd2 != 1)
        switch (remd1)
        {
        case 1:
            strcat(fans, "one ");
            break;
        case 2:
            strcat(fans, "two ");
            break;
        case 3:
            strcat(fans, "three ");
            break;
        case 4:
            strcat(fans, "four ");
            break;
        case 5:
            strcat(fans, "five ");
            break;
        case 6:
            strcat(fans, "six ");
            break;
        case 7:
            strcat(fans, "seven ");
            break;
        case 8:
            strcat(fans, "eight ");
            break;
        case 9:
            strcat(fans, "nine ");
            break;
        default:
            strcat(fans, "zero ");
            break;
        }
    printf("%s", fans);
    return 0;
}