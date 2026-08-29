#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

void displayStudent(struct Student s) {
    printf("Roll No: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s1;

    s1.rollNo = 100;
    strcpy(s1.name, "Arun");
    s1.marks = 88.5;

    displayStudent(s1);

    return 0;
}