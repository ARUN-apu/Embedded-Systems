#include<stdio.h>

int main(){
    int First_side, Second_side, Third_side;
    printf("Enter thfe Three Sides value of aTriangle: ");
    scanf("%d %d %d", &First_side, &Second_side, &Third_side);

    if(First_side + Second_side + Third_side == 180){
        printf("This Triangle is a Vlaid Triangle.\n");
    }else{
        printf("This Triangle is not Vlaid.\n");
    }
    return 0;
}