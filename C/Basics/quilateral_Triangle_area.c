#include <stdio.h>
#include <math.h>

int main(){
    double side, area;
    printf("Enter the side length of the equilateral trinangle: ");
    scanf("%lf", &side);

    if(side <= 0){
        printf("Error: side Length must be positive.\n");
        return 1;
    }

    area = (sqrt(3) / 4) * side * side;

    printf("Area of the equilateral triangle is: %.4lf\n", area);

    return 0;
}