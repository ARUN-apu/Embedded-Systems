#include <stdio.h>

int main(){

    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) ? printf("%d year is a Leap Year.\n", year) : printf("%d year is not a Leap Year.\n", year);  
    return 0;
}