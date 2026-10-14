/* Find the largest of two numbers */
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter any two numbers:");
    scanf("%d %d", &a, &b);
    c = (a > b) ? a : b;
    printf("The largest number is: %d", c);
    return 0;
}