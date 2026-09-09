#include <stdio.h>

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if(num == 0){
        printf("This is Zero.\n");
    }else if(num > 0){
        printf("This is a Positive number. \n");
    }else{
        printf("This is a Negative number. \n");
    }
    return 0;
}