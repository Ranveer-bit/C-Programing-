#include <stdio.h>

int main() {
    int i, j, k;
    int num = 10;   
    int rows = 4;   

    for (i = 1; i <= rows; i++) {
       
        for (j = i; j < rows; j++)
            printf("  ");

       
        for (k = 1; k <= i; k++)
            printf("%d ", num--);

        printf("\n");
    }

    return 0;
}