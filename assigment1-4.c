//Problem 4: Calculate Aggregate Marks and Percentage
//Description:
//Write a C program that takes the marks obtained by a student in five different subjects as input.
//The program should calculate and print the aggregate marks and percentage. Assume that the maximum marks for each subject is 100.
//Hint:First, calculate the aggregate marks by summing up the marks of the five subjects.
//Then, calculate the percentage using the formula: Percentage (Aggregate Marks/500)×100


#include <stdio.h>

int main() {
    int sub1, sub2, sub3, sub4, sub5;
    int total_marks;
    float percentage;

    printf("Enter marks for five subjects (out of 100):\n");
    printf("Subject 1: ");
    scanf("%d", &sub1);
    printf("Subject 2: ");
    scanf("%d", &sub2);
    printf("Subject 3: ");
    scanf("%d", &sub3);
    printf("Subject 4: ");
    scanf("%d", &sub4);
    printf("Subject 5: ");
    scanf("%d", &sub5);


      total_marks = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = ((float)total_marks / 500) * 100;

    printf("\nAggregate Marks: %d\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);





    }
