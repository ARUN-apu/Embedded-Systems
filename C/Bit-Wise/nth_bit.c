#include <stdio.h>

int main(){
    int num, n, result;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the nth Position: ");
    scanf("%d", &n);

    result = (num >> n) & 1;
    printf("%dth bit of %d is: %d\n", n, num, result);
    return 0;
}