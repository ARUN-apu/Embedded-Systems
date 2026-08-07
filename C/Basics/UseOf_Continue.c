// WAP to print all odd numbers from 1 to 20

// #include <stdio.h>
// int main(){
//     int i, n = 2;
//     for(i = 1; i <= 20; i++){
//         if( i == n){
//             n = n+2;
//             continue;
//         }
//         printf("%d \n", i);
//     }
//     return 0;
// }

// Easy way using for loop
#include <stdio.h>
int main(){
    for(int i =1; i<=20; i++){
        if(i % 2 != 0){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}