#include <stdio.h>

int main() {
    char name[50]; // string in C is stored as an array of characters, string is not a predefined data type

    printf("Enter your name: ");
    scanf("%49s", name); // %49s to prevent buffer overflow, leaving space for the null terminator

    printf("Your name is: %s", name); // added a new line for clarity

    return 0;
}
