#include <stdio.h>

int add(int, int);

int main(){
    int a = 20, b = 30, sum;
    sum = add(a , b);
    printf("Sum of Two numbers (%d + %d) using function is: %d \n", a,b,sum);
    return 0;
}
int add(int n, int m){
    return (n + m);
}