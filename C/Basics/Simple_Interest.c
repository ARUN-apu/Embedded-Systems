#include <stdio.h>

int main(){
    float Simple_Interest, Principal, Time, Rate_of_Interest;
    printf("Enter the Principle Amount: ");
    scanf("%f", &Principal);

    printf("Enter the Time of Interest (in years): ");
    scanf("%f", &Time);

    printf("Enter the Rate of Interest (in Percentage): ");
    scanf("%f", &Rate_of_Interest);

    Simple_Interest = (Principal * Time * Rate_of_Interest) / 100 ;
    printf("Simple Interest of %f is: %f\n", Principal, Simple_Interest);
    return 0;
}