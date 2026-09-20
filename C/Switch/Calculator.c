#include <stdio.h>

int main(){
    char operator;
    float num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;

        case '/':
            if(num2 == 0){
                printf("Error: Division by zero is not allowed.\n");
            }else{
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            }
            break;

        default:
            printf("Error: Invalid operator entered.\n");
            break;
    }

    return 0;
}