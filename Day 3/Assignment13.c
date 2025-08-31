#include <stdio.h>
int main() {
    float length, breadth, area, perimeter;
    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area = %f", area);
    printf("Perimeter = %f", perimeter);

    return 0;

}
