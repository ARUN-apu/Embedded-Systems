#include <stdio.h>

int findHCF(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int num1, num2, hcf;

    printf("Enter two integers: ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input. Please enter integers.\n");
        return 1;
    }
    int absoluteNum1 = (num1 < 0) ? -num1 : num1;
    int absoluteNum2 = (num2 < 0) ? -num2 : num2;
    hcf = findHCF(absoluteNum1, absoluteNum2);
    printf("The HCF of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}
