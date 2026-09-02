#include <stdio.h>

int main(){
    float sub1, sub2, sub3, sub4, sub5, Total_marks, Average_marks, Percentage;
    
    printf("Enter the marks of subject 1: ");
    scanf("%f", &sub1);

    printf("Enter the marks of subject 2: ");
    scanf("%f", &sub2);

    printf("Enter the marks of subject 3: ");
    scanf("%f", &sub3);

    printf("Enter the marks of subject 4: ");
    scanf("%f", &sub4);

    printf("Enter the marks of subject 5: ");
    scanf("%f", &sub5);

    Total_marks = (sub1 + sub2 + sub3 + sub4 + sub5);
    Average_marks = (sub1 + sub2 + sub3 + sub4 + sub5) / 5.0;
    // Assuming each subject is out of 100 (Total max marks = 500)
    Percentage = ((sub1 + sub2 + sub3 + sub4 + sub5) / 500.0) * 100.0;

    printf("Total Marks is: %.2f\n", Total_marks);
    printf("Average Marks is: %.2f\n", Average_marks);
    printf("Percentage is: %.2f\n", Percentage);
    return 0;
}