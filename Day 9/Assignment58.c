#include <stdio.h>

int main() {
    float feet1 = 900, inches1 = 9;
    float meters2 = 500, inches2 = 5;

    float dist1_meters, dist2_meters, total;

 
    dist1_meters = (feet1 * 0.3048) + (inches1 * 0.0254);

  
    dist2_meters = meters2 + (inches2 * 0.0254);

   
    total = dist1_meters + dist2_meters;

    printf("Total distance travelled by Mr. K = %.4f meters\n", total);

    return 0;
}
