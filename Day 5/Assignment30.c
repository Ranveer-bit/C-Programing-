#include <stdio.h>

int main() {
    int marks;
    int gradeKey;

    printf("Enter the student's marks: ");
    scanf("%d", &marks);

 
    if (marks >= 95) {
        gradeKey = 5; 
    } else if (marks >= 90 && marks <= 94) {
        gradeKey = 4;
    } else if (marks >= 80 && marks <= 89) {
        gradeKey = 3;
    } else if (marks >= 70 && marks <= 79) {
        gradeKey = 2; 
    } else {
        gradeKey = 1;
    }

  
    switch (gradeKey) {
        case 5:
            printf("Grade: A+\n");
            break;
        case 4:
            printf("Grade: A\n");
            break;
        case 3:
            printf("Grade: B\n");
            break;
        case 2:
            printf("Grade: C\n");
            break;
        case 1:
            printf("Grade: F\n");
            break;
        default:
            printf("Invalid marks entered.\n");
            break;
    }

    return 0;
}