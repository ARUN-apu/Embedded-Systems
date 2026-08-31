#include <stdio.h>

int main(){
    int length, width;
    printf("Enter the length of the Rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of the Rectangle: ");
    scanf("%d", &width);

    int Area = length * width;
    printf("Area of the Rectangle is: %d\n", Area);
    return 0;
}