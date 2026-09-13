#include <stdio.h>

int main(){
    float Physics, Chemistry, Biology, Mathematics, Computer, Percentage, Total_Marks = 500.00;

    printf("Whole Marks is: %.2f\n", Total_Marks);
    printf("Enter Marks of 5 subjects (out of 100 each): \n");

    printf("Enter Marks of Physics: ");
    scanf("%f", &Physics);

    printf("Enter Marks of Chemistry: ");
    scanf("%f", &Chemistry);

    printf("Enter Marks of Biology: ");
    scanf("%f", &Biology);

    printf("Enter Marks of Mathematics: ");
    scanf("%f", &Mathematics);

    printf("Enter Marks of Computer: ");
    scanf("%f", &Computer);

    if(Physics < 0 || Physics > 100 || Chemistry < 0 || Chemistry > 100 ||
       Biology < 0 || Biology > 100 || Mathematics < 0 || Mathematics > 100 ||
       Computer < 0 || Computer > 100){
        printf("Invalid marks entered! Each subject must be between 0 and 100.\n");
        return 0;
    }

    Percentage = ((Physics + Chemistry + Biology + Mathematics + Computer) / Total_Marks) * 100;

    printf("Percentage: %.2f%%\n", Percentage);

    if(Percentage >= 90){
        printf("Grade A\n");
    }else if(Percentage >= 80){
        printf("Grade B\n");
    }else if(Percentage >= 70){
        printf("Grade C\n");
    }else if(Percentage >= 60){
        printf("Grade D\n");
    }else if(Percentage >= 40){
        printf("Grade E\n");
    }else{
        printf("Grade F\n");
    }

    return 0;
}