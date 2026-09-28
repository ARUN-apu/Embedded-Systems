#include <stdio.h>

int main(){
    int number, digit, original_number, reverse_number = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    original_number = number;
    while(number > 0){
        digit = number % 10;
        reverse_number = (reverse_number * 10) + digit;
        number /= 10;
    }

    printf("Reverse number of %d is: %d\n", original_number, reverse_number);
    return 0;
}