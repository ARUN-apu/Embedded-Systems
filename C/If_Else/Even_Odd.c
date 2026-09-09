#include <stdio.h>

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("This number is a Even Number.\n");
    }else{
        printf("This number is a ODD Number.\n");
    }
    return 0;
}