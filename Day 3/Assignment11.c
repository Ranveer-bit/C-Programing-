#include <stdio.h>
int main() {
    int num, lastDigit1, lastDigit2;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Using modulus operator
    lastDigit1 = num % 10;

    // Without modulus operator (using division)
    lastDigit2 = num - (num / 10) * 10;

    printf("Last digit using modulus: %d\n", lastDigit1);
    printf("Last digit without modulus: %d\n", lastDigit2);

    return 0;
}
