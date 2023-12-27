#include <stdio.h>

int main() {
    int num, factorial = 1;
    
    printf("Enter a number:-");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Factorial of negative numbers is not defined.\n");
    } 
    else {
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }//for loop to iterate for i turns where i would increase till num leading to factorial value
        printf("Factorial of %d is: %d\n", num, factorial);
    }
    
    return 0;
}