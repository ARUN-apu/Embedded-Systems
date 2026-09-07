#include <stdio.h>

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if((num & 1) == 0){
        printf("%d is a Even number. \n", num);
    }else{
        printf("%d is a Odd number. \n", num);
    }
    return 0;
}