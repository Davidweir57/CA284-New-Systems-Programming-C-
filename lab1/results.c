#include <stdio.h>

int trys(int try)
{
    int total;
    total = try * 5;
    return total;
}

int conver(int conv)
{
    int total;
    total = conv * 2;
    return total;
}

int pensanddg(int pen, int dg)
{
    int total;
    total = (dg + pen) * 3;
    return total;
}

int main()
{
    int try, conv, pen, dg, total;
    printf("Please enter the amount of trys, conversions, penalties and dropgoals:\n");
    scanf("%d%d%d%d", &try, &conv, &pen, &dg);

    total = trys(try) + conver(conv) + pensanddg(pen, dg);

    printf("%d", total);

}