#include <stdio.h>
#include <math.h>

int main(){
    double Principal, rate, time, Compound_interest, amount;

    printf("Enter the Principal Amoount: ");
    scanf("%lf", &Principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the Time (in years): ");
    scanf("%lf", &time);

    amount = Principal * pow((1 + rate / 100), time);
    Compound_interest = amount - Principal;

    printf("Amount after %2lf years = %2lf\n", time, amount);
    printf("Compound Interest = %2lf\n", Compound_interest);
    return 0;
}