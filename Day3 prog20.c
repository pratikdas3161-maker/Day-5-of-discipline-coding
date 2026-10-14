
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, s, a;
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    s = (a+b+c)/2;
    a = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the triangle: %f", a);
    return 0;

}