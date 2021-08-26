#include <stdio.h>

int leap_year(int start, int end)
{
    int n;
    
    n = start;
    while (n <= end)
    {
        if ((n % 100 == 0) && (n % 400 == 0))
        {
            printf("%d\n", n);
        }
        else if ((n % 4 == 0) && (n % 100 != 0))
        {
            printf("%d\n", n);
        }
        n++;
    }
    return 0;
}

int main (int argc,char *argv[2])
{
    /* initialise and record the inputted start and end years */
    int start, end;

    sscanf(argv[1], "%d", &start);
    sscanf(argv[2], "%d", &end);

    leap_year(start, end);
    return 0;
}