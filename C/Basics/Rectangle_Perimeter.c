#include <stdio.h>

int main(){
    int length, width;
    printf("Enter the length of the Rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of the Rectangle: ");
    scanf("%d", &width);

    int Perimeter = 2 * (length + width);
    printf("Perimeter of the Rectangle is: %d\n", Perimeter);
    return 0;
}