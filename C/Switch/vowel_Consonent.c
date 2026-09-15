#include <stdio.h>

int main() {
    char alphabet;

    printf("Enter an alphabet (only a letter, not a number or special character): ");
    scanf(" %c", &alphabet); // Added a space before %c to skip any leading whitespace/newlines

    switch(alphabet) {
        // Grouping uppercase and lowercase cases together for cleaner code
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            printf("It is a Vowel.\n");
            break;
            
        default:
            printf("It is a Consonant.\n");
            break;
    }

    return 0;
}
