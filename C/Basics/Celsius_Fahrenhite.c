#include <stdio.h>

int main(){
    float celsius;
    float fahrenhite;
    printf("Enter the Temperature in celsius: ");
    scanf("%f", &celsius);

    fahrenhite = (celsius * 1.8) + 32;
    printf("%.2f celsius in fahrenhite is: %.2f\n",celsius, fahrenhite );
    return 0;
}