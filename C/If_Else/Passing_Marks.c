#include <stdio.h>

int main(){
    int Math_Mark, Science_Mark, Passing_Mark = 30;
    printf("Enter the Math_Mark: ");
    scanf("%d", &Math_Mark);

    printf("Enter the Science_Mark: ");
    scanf("%d", &Science_Mark);

    if(Math_Mark > Passing_Mark && Science_Mark > Passing_Mark){
        printf("You will get the gift of worth 45.\n");
    }else if(Math_Mark > Passing_Mark || Science_Mark > Passing_Mark){
        printf("You will get the gift of worth 15.\n");
    }else{
        printf("You failed in both the exam.\n");
    }

    return 0;
}