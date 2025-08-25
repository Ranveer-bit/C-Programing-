#include <stdio.h>
#include <math.h>
int main() {
    double P, r, t, CI, A;
    printf("Enter Principal, Rate and Time: ");
    scanf("%lf %lf %lf", &P, &r, &t);

    A = P * pow((1 + r/100), t);  // Final amount
    CI = A - P;  // Compound Interest

    printf("Compound Interest = %f", CI);
    printf("Total Amount = %f", A);

    return 0;
}