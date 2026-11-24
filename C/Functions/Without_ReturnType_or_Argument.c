#include <stdio.h>

void calculateSum(){
    int a, b, sum;
    printf("Enter the number of a and b: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    printf("The sum is: %d\n5", sum);
}

int main(){
    calculateSum();
    return 0;
}