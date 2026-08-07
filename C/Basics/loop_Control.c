// WAP to allow user to enter integer until he\she enter a negative value or Zero


// By using While Loop
// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: \n");
//     scanf("%d", &n);

//     while( n != 0){
//         if( n < 0)
//         break;
//         printf("Enter a number: \n");
//         scanf("%d", &n);
//     }
//     if(n==0)
//     printf("Loop Stopped because you entered Zero\n");
//     else
//     printf("Loop Stopped because You Entered a Negative Number");
//     return 0;
// }

// By using Do While Loop

#include <stdio.h>
int main(){
    int n;
    do{
        printf("Enter a number: \n");
        scanf("%d", &n);
        if(n < 0){
            break;
        }
    }while(n != 0);

    if(n==0)
    printf("Loop Stopped because you entered Zero\n");
    else
    printf("Loop Stopped because You Entered a Negative Number");
    return 0;

}