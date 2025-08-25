#include <stdio.h>
#include <math.h>
int main() {
    double num;
    printf("Enter a number (+ve or -ve): ");
    scanf("%f", &num);

    printf("Floor value = %f", floor(num));
    printf("Ceiling value = %f", ceil(num));

    return 0;
}