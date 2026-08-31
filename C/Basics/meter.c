#include <stdio.h>

int main(){
    float Centimeter;
    printf("Enter the length in Centimeter: ");
    scanf("%f", &Centimeter);

    float Meter = Centimeter / 100;
    float Kilometer = Centimeter / 100000;
    printf("%f Centimeter in Meter is: %f\n", Centimeter, Meter);
    printf("%f Centimeter in Kilometer is: %f\n", Centimeter, Kilometer);
    return 0;
}