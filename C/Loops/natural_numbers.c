#include <stdio.h>

int main(){
    int n;
    int i = 1;
    printf("Enter the number(Upper Limit): ");
    scanf("%d", &n);

    printf("From 1 to n Natural numbers are: \n");
    while(i <= n){
        printf("%d ", i);
        i++;
    }
    printf("\n");
    return 0;
}