#include <stdio.h>

int main(){
    int num, n, result;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the nth Position: ");
    scanf("%d", &n);

    result = num ^ (1 << n);
    printf("After Toggle %dth bit of %d the number will be: %d\n", n, num, result);
    return 0;
}