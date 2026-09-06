#include <stdio.h>

int main(){
    int num, total_bits;
    printf("Enter the number: ");
    scanf("%d", &num);

    total_bits = sizeof(num) * 8;

    for(int i = total_bits - 1; i >= 0; i--){
        printf("%d", (num >> i) & 1);
    }
    printf("\n");

    return 0;
}