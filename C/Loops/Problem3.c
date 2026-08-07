// How many times "Hello" will be Printed
#include <stdio.h>
int main(){
    int  i = -5;
    int count = 0;
    while( i <= 5){
        if( i >= 0)
        break;
    else{
        i++;
        continue;
    }
    printf("Hello");
    count ++;
    }
    printf("%d times Hello Printed here. \n", count);
    return 0;
}