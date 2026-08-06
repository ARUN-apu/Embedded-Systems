// What is the output of the following C program fragment? Assume size of integer is 4 bytes.
#include <stdio.h>
int main(){
    int i = 5;
    int var = sizeof(i++);
    printf("%d %d\n", i, var);
    return 0;
}