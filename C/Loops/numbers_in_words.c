#include <stdio.h>

int main() {
    const char *words[] = {"Zero", "One", "Two", "Three", "Four",
                           "Five", "Six", "Seven", "Eight", "Nine"};
    char num[20];

    printf("Enter a number: ");
    scanf("%19s", num);

    printf("In words: ");
    for (int i = 0; num[i] != '\0'; i++) {
        if (num[i] == '-')
            printf("Minus ");
        else if (num[i] >= '0' && num[i] <= '9')
            printf("%s ", words[num[i] - '0']);
    }
    printf("\n");

    return 0;
}