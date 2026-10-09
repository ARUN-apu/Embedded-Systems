#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    printf("Prime numbers between 1 and %d are:\n", num);
    
    for (int i = 2; i <= num; i++) {
        int isPrime = 1; 
                for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;       
            }
        }
        
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
