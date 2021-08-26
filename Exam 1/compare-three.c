#include <stdio.h>

int unique(int a, int b, int c)
{
    /*  Checks to see if all integers are unique
        returns 1 if there are duplicates */
    if (a == b || a == c)
    {
        return 1;
    }
    else if (b == a || b == c)
    {
        return 1;
    }
    else if (c == a || c == b)
    {
        return 1;
    }

    return 0;
}

int compare(int a, int b, int c)
{
    /* Compares each integer searching for and
       outputting the largest */
    if (a > b && a > c)
    {
        printf("%i is the largest number.\n", a);
    }
    else if (b > a && b > c)
    {
        printf("%i is the largest number.\n", b);
    }
    else if (c > a && c > b)
    {
        printf("%i is the largest number.\n", c);
    }
    return 0;
}

int main (int argc,char *argv[3])
{
    int a, b, c;
    /* reads in the 3 numbers assigning them a variable name a, b or c */
    sscanf(argv[1], "%d", &a);
    sscanf(argv[2], "%d", &b);
    sscanf(argv[3], "%d", &c);

    /*  Checks if unique has returned 1 (i.e. found a duplicate),
        telling the user if this has occurred. If unique returns 0
        (not found a duplicate) it returns the largest from compare */
    if (unique(a, b, c) == 1)
    {
        printf("error: two numbers entered are the same\n");
    }
    else
    {
        compare(a, b, c);
    }
    return 0;
}