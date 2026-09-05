
#include <stdio.h>

int main(){
    int num, count = 0, total_bits;
    printf("Enter the number: ");
    scanf("%d", &num);
    total_bits = sizeof(num) * 8;
    for(int i = 0; i <  total_bits; i++){
        if(((num >>  i) & 1) ==  1){
            break;
        }
        count ++;
    }
    printf("Trailing Zero's of  %d's is: %d\n", num, count);
    
    return 0;
}