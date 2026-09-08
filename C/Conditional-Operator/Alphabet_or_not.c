// #include <stdio.h>

// int main(){
//     char alphabet;
//     printf("Enter the Alphabet: ");
//     scanf("%c", &alphabet);

//     (((alphabet >= 'A') && (alphabet <= 'Z')) || ((alphabet >= 'a') && (alphabet <= 'z'))) ? printf("%c is an Alphabet. \n", alphabet) : printf("%c is not an Alphabet. \n", alphabet);
//     return 0;
// }


#include <stdio.h>
#include <ctype.h>

int main(){
    char alphabet;
    printf("Enter the Alphabet: ");
    scanf("%c", &alphabet);

    isalpha(alphabet) ? printf("%c is an Alphabet.\n", alphabet) : printf("%c is not an Alphabet.\n", alphabet);
    return 0;
}