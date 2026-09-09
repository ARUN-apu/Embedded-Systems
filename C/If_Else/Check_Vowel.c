#include <stdio.h>

int main(){
    char alphabet;
    printf("Enter an alphabet: ");
    scanf("%c", &alphabet);

    if((alphabet == 'A' || alphabet == 'a')|| (alphabet == 'E' || alphabet == 'e') || (alphabet == 'I' || alphabet == 'i') || (alphabet == 'O' || alphabet == 'o') || (alphabet == 'U' || alphabet == 'u')){
        printf("%c is a Vowel.\n", alphabet);
    }else{
        printf("%c is a Consonant.\n", alphabet);
    }
    return 0;
}