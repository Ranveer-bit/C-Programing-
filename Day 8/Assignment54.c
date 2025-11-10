#include <stdio.h>

int main() {
    int i, j, k, n = 3;

    for (i = n; i >= 1; i--) {
        
        for (j = 1; j <= i; j++)
            printf("%d ", j);

        
        for (k = 1; k <= (n - i) * 2 - 1; k++)
            printf("  ");  
       
        for (j = i; j >= 1; j--) {
            if (j == n) continue;  
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}