#include <stdio.h>

int main(){
    int num, count_Zero = 0, count_one = 0, total_bits;
    printf("Enter the number: ");
    scanf("%d", &num);

    total_bits = sizeof(num) * 8;

    printf("%d in binary is: ", num);
    for(int i = total_bits - 1; i >= 0; i--){
         printf("%d", (num >> i) & 1);
    }

    printf("\n");
    for(int i = total_bits - 1; i>= 0; i--){
        if(((num >> i) & 1) == 0){
            count_Zero ++;
        }else{
            count_one ++;
        }
    }

    printf("Total 0's are: %d\n", count_Zero);
    printf("Total 1's are: %d\n", count_one);
    return 0;
}