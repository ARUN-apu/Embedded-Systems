#include <stdio.h>

int main(){
    int num;
    int total_bits = sizeof(num) * 8;
    printf("Enter the number: ");
    scanf("%d", &num);

    (num & 1) == 0 ? printf("%d is a Even number.\n", num) : printf("%d is a Odd number.\n", num);

    return 0;
}