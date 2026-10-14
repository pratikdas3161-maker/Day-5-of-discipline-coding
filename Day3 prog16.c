/* Convert lowercase character to uppercase */
#include<stdio.h>
int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    c = c - 32;
    printf("The uppercase character is: %c\n", c);
    return 0;
}