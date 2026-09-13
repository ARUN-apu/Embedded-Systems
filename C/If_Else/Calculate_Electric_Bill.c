// Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
// 	For first 50 units Rs. 0.50/unit
// 	For next 100 units Rs. 0.75/unit
// 	For next 100 units Rs. 1.20/unit
// 	For unit above 250 Rs. 1.50/unit
// 	An additional surcharge of 20% is added to the bill 

#include <stdio.h>

int main(){
    float electricity_Unit, electricity_bill = 0, Total_Electricity_bill;
    printf("Enter the Total Electricity unit charges: ");
    scanf("%f", &electricity_Unit);

    if(electricity_Unit <= 0){
        printf("It is not a correct Electricity unit charge, Please Check your Electric Meter again or input a correct unit charge.\n");
        return 0;
    }

     if(electricity_Unit <= 50){
        electricity_bill = 0.50 * electricity_Unit;
    }else if(electricity_Unit <= 150){
        electricity_bill = (0.50 * 50) + (0.75 * (electricity_Unit - 50));
    }else if(electricity_Unit <= 250){
        electricity_bill = (0.50 * 50) + (0.75 * 100) + (1.20 * (electricity_Unit - 150));
    }else{
        electricity_bill = (0.50 * 50) + (0.75 * 100) + (1.20 * 100) + (1.50 * (electricity_Unit - 250));
    }

    Total_Electricity_bill = electricity_bill + (electricity_bill * (20.00 / 100));

    printf("Electricity bill will be %.2f rupess of %.2f unit electric charge.\n", Total_Electricity_bill, electricity_Unit);
    return 0;
}