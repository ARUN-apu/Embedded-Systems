#include <stdio.h>

int main(){
    int first_angle, second_angle,third_angle;
    printf("Enter the value of first angle: ");
    scanf("%d", &first_angle);
    printf("Enter the value of second angle: ");
    scanf("%d", &second_angle);

    third_angle = 180 - (first_angle + second_angle);

    printf("The value of the third_angle is: %d\n", third_angle); 

    return 0;
}