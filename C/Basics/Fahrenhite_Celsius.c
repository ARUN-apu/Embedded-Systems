#include <stdio.h>

int main(){
    float celsius;
    int fahrenhite;
    printf("Enter the Temperature in Fahrenhite: ");
    scanf("%d",&fahrenhite);

    celsius = (fahrenhite - 32) * (5.0/9.0);
    printf("%d fahrenhite in celsius is: %.2f\n", fahrenhite, celsius);
    return 0;
}