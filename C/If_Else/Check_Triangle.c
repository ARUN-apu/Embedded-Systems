#include <stdio.h>

int main(){
    float a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if((a + b > c) && (b + c > a) && (a + c > b) && a > 0 && b > 0 && c > 0){

        if(a == b && b == c){
            printf("It is an Equilateral Triangle.\n");
        }
        else if(a == b || b == c || a == c){
            printf("It is an Isosceles Triangle.\n");
        }
        else{
            printf("It is a Scalene Triangle.\n");
        }
    }
    else{
        printf("Invalid input: These sides do not form a valid triangle.\n");
    }

    return 0;
}