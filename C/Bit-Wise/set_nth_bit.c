#include <stdio.h>

int main(){
    int num, n, result;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the nth Position where you want to set the bit: ");
    scanf("%d", &n);

    result = num | (1 << n);
    printf("After set the bit the %d will be %d\n", num, result);
    return 0;
}