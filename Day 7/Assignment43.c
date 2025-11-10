#include <stdio.h>

int main() {
    int num, choice;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMenu:\n");
    printf("1. Check if number is a Buzz number\n");
    printf("2. Check if number is even or odd\n");
    printf("3. Check if number is positive or negative\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            if (num % 7 == 0 || num % 10 == 7)
                printf("%d is a Buzz number.\n", num);
            else
                printf("%d is not a Buzz number.\n", num);
            break;
        case 2:
            if (num % 2 == 0)
                printf("%d is even.\n", num);
            else
                printf("%d is odd.\n", num);
            break;
        case 3:
            if (num > 0)
                printf("%d is positive.\n", num);
            else if (num < 0)
                printf("%d is negative.\n", num);
            else
                printf("The number is zero.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}