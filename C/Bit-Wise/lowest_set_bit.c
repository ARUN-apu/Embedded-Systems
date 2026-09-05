// #include <stdio.h>
// #include <math.h>
// int main(){
//     int num, highest_set_bit;
//     printf("Enter the number: ");
//     scanf("%d", &num);
//     if (num == 0) {
//     printf("0 has no set bits\n");
//     } else {
//         unsigned int unum = (unsigned int)num;
//         highest_set_bit = floor(log2(unum & (-unum)));
//         printf("%d's lowest set bit position is: %d\n", num, highest_set_bit);
//     }
//     return 0;
// }


#include <stdio.h>
#include <math.h>
int main(){
    int num, lowest_set_bit, total_bits;
    printf("Enter the number: ");
    scanf("%d", &num);
    total_bits = sizeof(num) * 8;
     if (num == 0) {
    printf("0 has no set bits\n");
    return 0;
    }
    for(int i = 0; i <  total_bits; i++){
        if(((num >>  i) & 1) ==  1){
            lowest_set_bit = i;
            break;
        }
    }
    printf("%d's lowest set bit position is: %d\n", num, lowest_set_bit);
    
    return 0;
}