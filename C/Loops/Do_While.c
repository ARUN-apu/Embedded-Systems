#include <stdio.h>

int main(){
    int num, index = 1;
    printf("Enter the number: ");
    scanf("%d", &num);

    do{
        printf("%d ", index);
        index += 1;
    }while(index <= num);
    printf("\n");
    return 0;
}