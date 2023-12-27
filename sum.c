#include <stdio.h>

int main() {
    int num1, num2, sum;
    
    printf("Enter first number: ");
    scanf("%d", &num1);     //%d is a format specifier that shows a single decimal value.

    printf("Enter second number: ");
    scanf("%d", &num2);     //&num2 shows that the value taken by scanf will be stored to num2
    
    sum = num1 + num2;
    
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);
    //%d here is used to print the given number after string ends 
    return 0;
}