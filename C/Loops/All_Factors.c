#include <stdio.h>

int main() {
    int num, i;
    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("Error: Please enter a valid positive integer.\n");
        return 1;
    }

    printf("The factors of %d are: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}
