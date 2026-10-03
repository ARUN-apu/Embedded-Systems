#include <stdio.h>

int main() {
    int i;

    printf("===============================\n");
    printf("  ASCII Value \t Character\n");
    printf("===============================\n");

    // Loop through all 256 possible character representations
    for (i = 0; i <= 255; i++) {
        // ASCII 32 to 126 are standard printable characters
        if (i >= 32 && i <= 126) {
            printf("    %d \t\t    %c\n", i, i);
        } 
        // 128 to 255 are extended ASCII characters (printable depending on system locale)
        else if (i >= 128) {
            printf("    %d \t\t    %c (Extended)\n", i, i);
        }
        // 0 to 31 and 127 are non-printable control characters
        else {
            printf("    %d \t\t [Non-printable Control]\n", i);
        }
    }

    return 0;
}
