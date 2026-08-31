#include <stdio.h>

float diameter(int r){
    return 2 * r;
}

float Circumference(int r, float pi){
    return 2 * r * pi;
}

float Area(int r, float pi){
    return r * r * pi;
}

int main(){
    int r;
    float pi = 3.14;
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    printf("Diameter of a Circle is: %.2f \n", diameter(r));
    printf("Circumference of a Circle is: %.2f \n", Circumference(r, pi));
    printf("Area of a Circle is: %.2f \n",Area(r, pi));
    return 0;
}