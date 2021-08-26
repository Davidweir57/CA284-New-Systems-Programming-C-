#include <stdio.h>

int main()
{

    float cm;
    float inches;
    int i;

    cm = 30;
    i = 0;
    while (cm <= 49)
    {
        inches = cm / 2.54;

        if (i % 5 == 0)
        {
            printf("\n");
        }
        i++;

        printf("%0.2f \t", inches);

        cm ++;
    }

}
