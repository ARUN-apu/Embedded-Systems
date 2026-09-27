#include <stdio.h>
#include <stdlib.h>

int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

     int first_digit = abs(number);
    while (first_digit >= 10) {
        first_digit = first_digit / 10;
    }
    printf("First Digit of a number is: %d\n", first_digit);

    int Last_digit = number % 10;
    printf("Last Digit of a number is: %d \n", Last_digit);
    
    return 0;
}