#include <stdio.h>

int main(){
    long long number, digit = 0;
    printf("Enter the number: ");
    scanf("%lld", &number);

    while(number > 0){
        number /= 10;
        digit++;
    }

    printf("Count of digits in this number is: %lld\n", digit);
    return 0;
}