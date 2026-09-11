#include <stdio.h>

int main(){
    int amount, Five_hundred_notes = 0, Two_hundred_notes = 0, One_hundred_notes = 0, Fifty_Rupess_notes = 0, Twenty_Rupess_notes = 0, Ten_Rupess_notes = 0, Total_notes;
    printf("Enter the Amount: ");
    scanf("%d", &amount);

    while(amount > 0)
    {
        if(amount >= 500 ){
        Five_hundred_notes ++;
        amount -= 500;
    }else if(amount >= 200 ){
        Two_hundred_notes ++;
        amount -= 200;
    }else if(amount >= 100 ){
        One_hundred_notes ++;
        amount -= 100;
    }else if(amount >= 50 ){
        Fifty_Rupess_notes ++;
        amount -= 50;
    }else if(amount >= 20 ){
        Twenty_Rupess_notes ++;
        amount -= 20;
    }else if(amount >= 10 ){
        Ten_Rupess_notes ++;
        amount -= 10;
    }else{
            printf("Note: Rs. %d could not be represented in available notes.\n", amount);
            break;
        }
    }

    Total_notes = Five_hundred_notes + Two_hundred_notes + One_hundred_notes + Fifty_Rupess_notes + Twenty_Rupess_notes + Ten_Rupess_notes;
    printf("Total Notes required for this amount are: %d\n", Total_notes);
    printf("500 notes required: %d\n",Five_hundred_notes);
    printf("200 notes required: %d\n",Two_hundred_notes);
    printf("100 notes required: %d\n",One_hundred_notes);
    printf("50 rupees notes required: %d\n", Fifty_Rupess_notes);
    printf("20 rupess notes required: %d\n", Twenty_Rupess_notes);
    printf("10 rupess notes required: %d\n", Ten_Rupess_notes);
    return 0;
}