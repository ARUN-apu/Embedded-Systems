#include <stdio.h>

int main(){
    int num, n, result;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the nth Position: ");
    scanf("%d", &n);

    result = num & ~(1 << n);
    printf("After the %dth bit of %d the result will be: %d\n", num, n, result);
    return 0;
}