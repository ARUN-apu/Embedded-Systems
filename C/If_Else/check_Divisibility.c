#include <stdio.h>

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if(num % 5 == 0 && num % 11 == 0){
        printf("This Number is divisible by 5 and 11.\n");
    }else{
        printf("This Number is not divisible by 5 and 11. \n");
    }
    return 0;
}