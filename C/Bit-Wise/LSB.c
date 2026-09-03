#include <stdio.h>

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if(num & 1){
        printf("LSB of this number is SET. (This is a ODD number.)\n");
    }else{
        printf("LSB of this number is not SET. (This is a EVEN number)\n");
    }
    return 0;
}