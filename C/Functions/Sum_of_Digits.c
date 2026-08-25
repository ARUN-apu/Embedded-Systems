#include <stdio.h>

int sumDigits(int n) {
    int sum = 0;

    if (n < 0)
        n = -n; // handle negative numbers

    while (n != 0) {
        sum += n % 10;
        n = n / 10;
    }

    return sum;
}

int main() {
    int num ;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Sum of digits = %d\n", sumDigits(num));

    return 0;
}