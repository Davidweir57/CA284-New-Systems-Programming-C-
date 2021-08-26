#include <stdio.h>

int main()
{
    printf("Enter an Amount in Centimetres: ");

    float cm;
    scanf("%f", &cm);

    float inches;

    inches = cm / 2.54;

    printf("The Amount in Inches is: %0.2f", inches);

}
