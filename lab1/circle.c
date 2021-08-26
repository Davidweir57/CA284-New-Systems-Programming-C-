#include <stdio.h>

#define PI 3.1415

void calculateArea (int radius, float *area);

int main (void)
{

int radius = 0;
float circleArea = 0.0;

printf ("Enter the radius for the circle: ");;
scanf("%d",&radius);
calculateArea (radius, &circleArea);

printf ("The area of the circle is: %f0.6",&circleArea);
return (0);
}

void calculateArea (int radius, float *circleArea)
{

*circleArea = PI*(radius*radius);
}