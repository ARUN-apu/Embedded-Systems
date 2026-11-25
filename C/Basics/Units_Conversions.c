/*
Kms to miles
inches to foot
cms to inches
pound to kgs
inches to meters
*/

#include <stdio.h>

int main()
{

    char choice;
    float input, result;
    printf("Please Enter the Option what you want to convert: \n");
    printf("To convert Kilometer to miles Press a\n");
    printf("To convert inches to foot Press b\n");
    printf("To convert cms to inches Press c\n");
    printf("To convert pound to kgs Press d\n");
    printf("To convert inches to meter Press e\n");

    scanf("%c", &choice);
    switch (choice)
    {
    case 'a':
        printf("Enter distance in Kilometers: ");
        scanf("%f", &input);
        result = input * 0.621371;
        printf("%.2f Kilometers = %.2f Miles\n", input, result);
        break;

    case 'b':
        printf("Enter length in Inches: ");
        scanf("%f", &input);
        result = input / 12.0;
        printf("%.2f Inches = %.2f Feet\n", input, result);
        break;

    case 'c':
        printf("Enter length in Centimeters: ");
        scanf("%f", &input);
        result = input * 0.393701;
        printf("%.2f Centimeters = %.2f Inches\n", input, result);
        break;

    case 'd':
        printf("Enter weight in Pounds: ");
        scanf("%f", &input);
        result = input * 0.453592;
        printf("%.2f Pounds = %.2f Kilograms\n", input, result);
        break;

    case 'e':
        printf("Enter length in Inches: ");
        scanf("%f", &input);
        result = input * 0.0254;
        printf("%.2f Inches = %.2f Meters\n", input, result);
        break;

    default:
        printf("Invalid option! Please run the program again and choose a, b, c, d, or e.\n");
        break;
    }
    return 0;
}
