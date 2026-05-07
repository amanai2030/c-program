#include <stdio.h>



int main() {

    float basic_salary, da, hra, gross_salary;



    printf("Enter Ramesh's basic salary: ");


    scanf("%f", &basic_salary);



    da = 0.4 * basic_salary;

    hra = 0.2 * basic_salary;


    gross_salary = basic_salary + da + hra;



    printf("Basic Salary: %.2f\n", basic_salary);

    printf("Dearness Allowance: %.2f\n", da);

    printf("House Rent Allowance: %.2f\n", hra);

    printf("Gross Salary: %.2f\n", gross_salary);





}

