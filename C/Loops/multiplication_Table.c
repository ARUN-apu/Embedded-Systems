#include <stdio.h>

int main(){
    int n, result = 0;
    printf("Enter the number which you want to print Multiplication Table: ");
    scanf("%d", &n);

    for(int i = 1; i<= 10; i++){
        result = n * i;
        printf("%d * %d = %d  ", n, i, result);
        printf("\n");
    }
    printf("\n");
    return 0;
}