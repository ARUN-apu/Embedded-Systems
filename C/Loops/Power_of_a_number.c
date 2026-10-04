#include <stdio.h>

int main() {
    int base, exponent;
    long long result = 1; 

    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    for (int i = 1; i <= exponent; i++) {
        result *= base; 
    }
    printf("%d raised to the power of %d is: %lld\n", base, exponent, result);

    return 0;
}
