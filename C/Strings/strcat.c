#include <stdio.h>
#include <string.h>

int main(){
    char str1[100], str2[100];
    strcpy(str1, "Welcome to your new Embedded Job");
    strcpy(str2, " with salary package of 7LPA.");
    strcat(str1, str2);
    printf("%s \n", str1);
    return 0;
}