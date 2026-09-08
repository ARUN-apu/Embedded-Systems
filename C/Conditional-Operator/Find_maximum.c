#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter Three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int maximum_number = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("%d is the maximum number between three numbers. \n", maximum_number);
    return 0;
}