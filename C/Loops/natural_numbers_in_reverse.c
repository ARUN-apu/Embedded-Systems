#include <stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int i = 1;
    printf("Natural Numbers from: %d to 1 are: \n", n);
    while(i <= n){
        printf("%d ", n);
        n--;
    }
    printf("\n");
    return 0;
}