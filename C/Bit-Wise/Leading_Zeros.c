#include <stdio.h>

int main(){
    int num, highest_set_bit, total_bits;
    printf("Please Enter the number: ");
    scanf("%d", &num);

    total_bits = sizeof(num) * 8;

    for(int i = total_bits - 1; i >= 0; i--){
        if(((num >> i) & 1) == 1){
            highest_set_bit = i+1;
            break;
        }
    }

    printf("Leading Zeros of %d's binary number is: %d\n", num, (total_bits - highest_set_bit));
    return 0;
}