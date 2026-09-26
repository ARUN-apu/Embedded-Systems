#include <stdio.h>

int main(){
    char CH = 'A';
    printf("Uppercase alphabets from A to Z: \n");
    while(CH <= 'Z'){
        printf("%c ", CH);
        CH++;
    }
    printf("\n");
    printf("\n");

    char ch = 'a';
    printf("Lowercase alphabets from a to z: \n");
    while(ch <= 'z'){
        printf("%c ", ch);
        ch++;
    }
    printf("\n");
    return 0;
}