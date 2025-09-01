#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0)
        printf("Whole number\n");
    else
        printf("Not a whole number\n");

    return 0;
}
