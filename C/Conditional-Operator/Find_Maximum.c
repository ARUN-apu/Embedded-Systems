#include <stdio.h>

int main(){
    int a, b;
    printf("Enter Two numbers: ");
    scanf("%d %d", &a, &b);

    (a > b) ? printf("%d is maximum number between %d and %d \n", a, a, b) : printf("%d is maximum number between %d and %d \n", b, a, b);
    return 0;
}