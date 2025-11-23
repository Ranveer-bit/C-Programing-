#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

int main() {
    struct Complex c1, c2, sum;

   
    printf("Enter real part of first complex number: ");
    scanf("%f", &c1.real);
    printf("Enter imaginary part of first complex number: ");
    scanf("%f", &c1.imag);

    
    printf("Enter real part of second complex number: ");
    scanf("%f", &c2.real);
    printf("Enter imaginary part of second complex number: ");
    scanf("%f", &c2.imag);

    
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

   
    printf("\nSum = %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}
