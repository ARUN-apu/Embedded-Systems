#include <stdio.h>

int main(){
    float Price, selling_Price, difference, Markup_Percentage;

    printf("Enter the Price: ");
    scanf("%f", &Price);
    printf("Enter Markup Percentage: ");
    scanf("%f", &Markup_Percentage);

    selling_Price = Price + ((Price * Markup_Percentage) / 100);
    difference = selling_Price - Price;

    if(difference > 0){
        printf("If Price %.2f is marked up by %.2f%%, the Selling Price would be %.2f Rupees and the Profit would be %.2f Rupees.\n",
               Price, Markup_Percentage, selling_Price, difference);
    } else if(difference < 0){
        printf("If Price %.2f is marked down by %.2f%%, the Selling Price would be %.2f Rupees and the Loss would be %.2f Rupees.\n",
               Price, Markup_Percentage, selling_Price, -difference);
    } else {
        printf("Selling Price %.2f equals the original Price %.2f — no profit, no loss.\n", selling_Price, Price);
    }

    return 0;
}