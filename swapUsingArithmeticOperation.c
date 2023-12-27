#include <stdio.h>
//This code avoids usage of any temp variable
int main() {
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("\nBefore swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    //swap:
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}