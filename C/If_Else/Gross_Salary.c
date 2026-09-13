#include <stdio.h>

int main(){
    float Basic_Salary, Gross_Salary;
    printf("Enter the Basic Salary of an Employee: ");
    scanf("%f", &Basic_Salary);

    if(Basic_Salary <= 0 ){
        printf("It is not a valid input for Basic Salary. Please Input a Correct Salary.\n");
        return 0;
    }


    if(Basic_Salary <= 10000){
        Gross_Salary = Basic_Salary + (Basic_Salary * (20.00 / 100)) + (Basic_Salary * (80.00 / 100));
    }else if(Basic_Salary <= 20000){
        Gross_Salary = Basic_Salary + (Basic_Salary * (25.00 / 100)) + (Basic_Salary * (90.00 / 100));
    }else if( Basic_Salary > 20000){
        Gross_Salary = Basic_Salary + (Basic_Salary * (30.00 / 100)) + (Basic_Salary * (95.00 / 100));
    }

    printf("Gross salary of an Employee is : %.2f When his Basic Salary is: %.2f\n", Gross_Salary, Basic_Salary);
    return 0;
}