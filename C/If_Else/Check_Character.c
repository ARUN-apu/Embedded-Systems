#include <stdio.h>

int main(){
    char Character;
    printf("Enter a Character: ");
    scanf("%c", &Character);

    if(Character >= 'A' && Character <= 'Z'){
        printf("This is a Uppercase alphabet\n");
    }else if(Character >= 'a' && Character <= 'z'){
        printf("This is Lowercase alphabet \n");
    }else{
        printf("This is not a alphabet. \n");
        }
    return 0;
}