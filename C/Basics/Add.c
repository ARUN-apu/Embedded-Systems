#include <stdio.h>

int main() {
    int x, y;
    printf("Please Enter Two numbers you want to add: \n");
    scanf("%d %d", &x, &y);
    
    while (y != 0) {
        int carry = x & y; 
        x = x ^ y;        
        y = carry << 1;   
    }
    
    printf("Sum of Two Numbers without Using + operator is: %d \n", x);
    return 0;
}
