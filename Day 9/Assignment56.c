#include <stdio.h>

struct Book {
    int id;
    char name[50];
    char author[50];
    float price;
};

int main() {
    struct Book b[10];
    int i;

  
    for(i = 0; i < 10; i++) {
        printf("\nEnter details of Book %d:\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &b[i].id);

        printf("Enter Book Name: ");
        scanf(" %[^\n]", b[i].name); 

        printf("Enter Author Name: ");
        scanf(" %[^\n]", b[i].author);

        printf("Enter Price: ");
        scanf("%f", &b[i].price);
    }

    
    printf("\n\n==== BOOK DETAILS ====\n");
    for(i = 0; i < 10; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Book ID      : %d\n", b[i].id);
        printf("Book Name    : %s\n", b[i].name);
        printf("Author Name  : %s\n", b[i].author);
        printf("Price        : %.2f\n", b[i].price);
    }

    return 0;
}
