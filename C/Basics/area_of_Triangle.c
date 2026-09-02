#include <stdio.h>

int main(){
    int base, height, area;
    printf("Enter the base of a Triangle: ");
    scanf("%d", &base);
    printf("Enter the height of a Triangle: ");
    scanf("%d", &height);

    area = (base * height) / 2;
    printf("Area of a Triangle is(using base and height): %d\n", area);

    return 0;
}