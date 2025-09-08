#include <stdio.h>

int main()
 {
    int units;
    float bill = 0.0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    switch (units / 100) {
        case 0: 
            bill = units * 5.0;
            break;
        case 1: 
            bill = (100 * 5.0) + ((units - 100) * 7.0);
            break;
        default: 
            bill = (100 * 5.0) + (100 * 7.0) + ((units - 200) * 10.0);
            break;
    }

    printf("Total electricity bill: $%.2f\n", bill);

    return 0;
}