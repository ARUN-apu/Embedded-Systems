#include <stdio.h>

int main() {
    int num;
    unsigned long long fact = 1; 

    printf("Enter a non-negative number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (num > 20) {
        printf("Error: Result too large to store in standard integer types (max 20).\n");
    } else {
        for (int i = num; i > 0; i--) {
            fact *= i;
        }
        printf("Factorial of %d is: %llu\n", num, fact);
    }

    return 0;
}
