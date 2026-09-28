#include <stdio.h>

int main(){
    int number, digit = 0, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    int original_number = number;
    while(number > 0){
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("Sum of digits of %d is: %d \n",original_number, sum);
    return 0;
}