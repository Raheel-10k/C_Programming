#include <stdio.h>

int main() {
    float principal, rateOfInterest, time, si;
    
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate: ");
    scanf("%f", &rateOfInterest);
    
    printf("Enter time in years: ");
    scanf("%f", &time);
    
    si = (principal * rateOfInterest * time) / 100.0;
    
    printf("Simple Interest:-%.2f\n", si);
    
    return 0;
}