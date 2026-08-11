#include <stdio.h>
#include <math.h>

int main(){
    int n;
    int val1, count = 0;
    printf("Please Enter the number: ");
    scanf("%d", &n);
    if(n <= 1){
        printf("%d It is not a Prime Number.", n);
        return 0;
    }

    val1 = ceil(sqrt(n));

    for(int i = 2; i<= val1; i++){
        if(n % i == 0){
            count ++;
            break;
        }
    }

    if((count == 0 && n != 1) || n == 2 || n == 3){
        printf("%d is a Prime Number.\n", n);
    }else{
        printf("%d is not a Prime Number.\n", n);
    }
    return 0;
}