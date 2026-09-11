#include <stdio.h>

int main(){
    int number;
    printf("Enter the Month number: ");
    scanf("%d", &number);

    switch(number){
        case 1:
        printf("This is January. This Month have 31 days.\n");
        break;

       case 2:
        if ((number == 2) && ((1900 % 4 == 0 && 1900 % 100 != 0) || 1900 % 400 == 0))
        printf("This is February. This month has 29 days (leap year).\n");
        else
        printf("This is February. This month has 28 days.\n");
        break;

        case 3:
        printf("This is March. This Month has 31 days.\n");
        break;

        case 4:
        printf("This is April. This Month has 30 days.\n");
        break;

        case 5:
        printf("This is May. This Month has 31 days.\n");
        break;

        case 6:
        printf("This is June. This Month has 30 days.\n");
        break;

        case 7:
        printf("This is July. This Month has 31 days.\n");
        break;

        case 8:
        printf("This is August. This Month has 31 days.\n");
        break;

        case 9:
        printf("This is September. This Month has 30 days.\n");
        break;

        case 10:
        printf("This is October. This Month has 31 days.\n");
        break;

        case 11:
        printf("This is November. This Month has 30 days.\n");
        break;

        case 12:
        printf("This is December. This Month has 31 days.\n");
        break;

        default:
        printf("This is not a Valid Month number. Please Choose Correct Month number.\n");
        break;
    }
    return 0;
}