#include <stdio.h>
int main(){
    int n, result = 0, reminder, q;
    printf("Please Enter the number: ");
    scanf("%d", &n);

    q = n;

    while(q != 0){
        reminder = q % 10;
        result = result * 10 + reminder;
        q /= 10;
    }

    if(result == n){
        printf("It is a Palindrome number.\n");
    }else{
        printf("N0!, Its not a palindrome.\n");
    }
    return 0;

}