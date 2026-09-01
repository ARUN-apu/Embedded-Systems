#include <stdio.h>

int main(){
    int base;
    int exponent;
    long long result = 1;
    printf("Enter the number: ");
    scanf("%d",&base);
    printf("Enter the power of number:  ");
    scanf("%d",&exponent);

    if(exponent == 0){
        result = 1;
    }
   
    for(int i = 1; i <= exponent; i++){
            result *= base;
    }

    printf("%d raised to the power %d is: %lld\n", base, exponent, result);
    return 0;
}