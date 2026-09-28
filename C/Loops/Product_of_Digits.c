#include <stdio.h>

int main(){
    int number, digit = 0, Product = 1;
    printf("Enter a number: ");
    scanf("%d", &number);

    int original_number = number;
    while(number > 0){
        digit = number % 10;
        Product *= digit;
        number /= 10;
    }

    printf("Product of digits of %d is: %d \n",original_number, Product);
    return 0;
}