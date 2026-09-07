#include <stdio.h>

int main(){
    int num, total_bits, n;
    printf("Enter the number: ");
    scanf("%d", &num);

    
    total_bits = sizeof(num) * 8;
    
    printf("Before rotate: ");
    for(int i = total_bits - 1; i >= 0; i--){
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
    
    printf("Enter the number of bits to rotate left: ");
    scanf("%d", &n);
    
    int falling_bits = (num >> (total_bits - n)) & ((1 << n) - 1);
    int rotate = (num << n) | falling_bits;

    printf("After rotate, the number is: %d\n", rotate);

    printf("After rotate: ");
    for(int i = total_bits - 1; i >= 0; i--){
        printf("%d", (rotate >> i) & 1);
    }
    printf("\n");

    return 0;
}