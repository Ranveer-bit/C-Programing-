#include <stdio.h>
int main() 
{
    float basic_salary, hra, ta, da, gross_salary;
    int choice = 1; 

    printf("Enter the Basic Salary: ");
    scanf("%f", &basic_salary);
    switch (choice) 
	{
        case 1: 
            hra = basic_salary * (20.0 / 100.0);
            ta = basic_salary * (10.0 / 100.0);
            da = basic_salary * (5.0 / 100.0);
            break;
        default:
            printf("Invalid choice for salary calculation.\n");
            hra = 0.0;
            ta = 0.0;
            da = 0.0;
            break;
    }

    gross_salary = basic_salary + hra + ta + da;

    printf("\nHRA: %.f\n", hra);
    printf("TA: %.f\n", ta);
    printf("DA: %.f\n", da);
    printf("Gross Salary: %.f\n", gross_salary);

    return 0;
}