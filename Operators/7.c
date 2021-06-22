//WAP that evaluates area of circle using symbolic constant.

#include <stdio.h>
#define PI 3.1415

int main()
{
    float a, r;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    a = PI*r*r;

    printf("The area of the circle is: %f", a);

    return 0;
}
