#include <stdio.h>

int main(){
    int n;
    int sum = 0;
    printf("Enter the upper limit of natural number: ");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        sum += i;
    }
    printf("Sum of all natural numbers between 1 to %d is: %d\n", n,sum);
    return 0;
}