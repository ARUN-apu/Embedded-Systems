#include <stdio.h>

int main(){
    int n;
    int sum = 0;
    printf("Enter the upper limit number: ");
    scanf("%d", &n);

    for(int i = 1;  i<= n; i++){
        if((i & 1) == 0){
            sum += i;
        }
    }

    printf("Sum of all Even numbers between 1 to %d is: %d\n", n, sum);
    return 0;
}