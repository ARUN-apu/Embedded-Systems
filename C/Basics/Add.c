#include <stdio.h>

int main(){
    int x, y;
    printf("Please Enter Two number you want to add: \n");
    scanf("%d %d", &x, &y);

    while(y != 0){
        x++;
        y--;
    }
    printf("Some of Two Numbers without Using  + operator is: %d \n", x);
    return 0;
}