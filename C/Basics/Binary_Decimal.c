#include <stdio.h>

int main(){
    int binary;
    printf("Please Enter a Binary Number which contains(only 0 & 1): ");
    scanf("%d", &binary);
    
    int n = binary;

    int decimal = 0, weight = 1;
    while(binary != 0){
        int rem = binary % 10;
        decimal = decimal + rem*weight;
        binary /= 10;
        weight *= 2;
    }

    printf("%d binary number decimal value is: %d \n", n, decimal);
    return 0;
}