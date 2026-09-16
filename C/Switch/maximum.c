#include <stdio.h>

int main(){
    int a , b;
    printf("Enter Two numbers: ");
    scanf("%d %d", &a, &b);

    int Maximum = (a > b);
    switch (Maximum){
        case 1:
        printf("Maximum numbers is: %d\n", a);
        break;

        case 0:
        printf("Maximum number is: %d\n", b);
        break;
    }
    return 0;
}