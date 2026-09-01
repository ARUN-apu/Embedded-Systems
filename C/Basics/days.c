#include <stdio.h>

int main(){
    int days, years, months, remaining_days;
    printf("Enter days: ");
    scanf("%d", &days);

    years = days / 365;
    remaining_days = days % 365;

    months = remaining_days / 30 ;
    remaining_days = remaining_days % 30;

    printf("%d days is %d years %d months %d days", days, years, months, remaining_days);
    return 0;
}