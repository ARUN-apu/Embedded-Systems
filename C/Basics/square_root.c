#include <stdio.h>
#include <math.h>

int main(){
    double number, result;
    printf("Enter the number: ");
    scanf("%lf", &number);

    if(number < 0){
        printf("Error: Can't Calculate the square root of a negative number.\n");
    }else{
        result = sqrt(number);
        printf("Square root of %lf is: %lf\n", number, result);
    }
    return 0;
}