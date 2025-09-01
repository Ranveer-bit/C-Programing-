#include <stdio.h>
int main() {
    int toss;
    printf("Enter 0 for Head or 1 for Tail: ");
    scanf("%d", &toss);

    if (toss == 0)
        printf("Head\n");
    else
        printf("Tail\n");

    return 0;
}
