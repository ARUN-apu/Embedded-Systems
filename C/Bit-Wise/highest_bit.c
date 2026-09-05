#include <stdio.h>
#include <math.h>
int main(){
    int num, highest_set_bit;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num == 0) {
    printf("0 has no set bits\n");
    } else {
        unsigned int unum = (unsigned int)num;
        highest_set_bit = floor(log2(unum));
        printf("%d's highest set bit position is: %d\n", num, highest_set_bit);
    }
    return 0;
}