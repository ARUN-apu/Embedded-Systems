//  WAP to print numbers from 1 to 10 in such a way that when number is odd add 1 and when number is even substract 1.

#include <stdio.h>

void odd();
void even();
int n = 1;

void odd(){
    if( n <= 10){
        printf("%d ", n+1);
        n++; 
        even();
    }
    return;
}

void even(){
    if( n <= 10){
        printf("%d ", n-1);
        n++; 
        odd();
    }
    return;
}

int main(){
    odd();
    printf("\n");
    return 0;
}


// #include <stdio.h>

// int main(){
//     for(int i = 1; i<= 10; i++){
//         if(i % 2 == 0){
//             printf("%d ", i-1);
//         }else{
//             printf("%d ",i+1);
//         }
//     }
//     printf("\n");
//     return 0;
// }
