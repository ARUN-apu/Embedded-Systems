#include <stdio.h>
#include <stdlib.h> 

int main() {
    long long num, temp;
    int frequency[10] = {0}; 
    int rem;

 printf("Enter any integer: ");
    scanf("%lld", &num);

    temp = llabs(num);

    if (temp == 0) {
        frequency[0] = 1;
    } else {
        
        while (temp > 0) {
            rem = temp % 10;      
            frequency[rem]++;     
            temp = temp / 10;     
        }
    }

    printf("\nDigit Frequency Table:\n");
    printf("---------------------\n");
    printf("Digit\tFrequency\n");
    printf("---------------------\n");
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > 0) {
            printf("%d\t%d\n", i, frequency[i]);
        }
    }

    return 0;
}
