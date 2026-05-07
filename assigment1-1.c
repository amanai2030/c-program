

//Description:
//Write a C program that takes the radius of a circle
// as input and computes the perimeter and area of
//the circle. The program should then print both
//values.
//Hint:
//Use the following formulas:
//
//
//Perimeter (Circumference) = 2×π×radius
//Area = π×radius×radius
//You can use the value of π\piπ as 3.14159.


#include <stdio.h>

#define  PI3.14159

int main() {
    float radius , perimeter , area ;
    const float PI=3.14159 ;

    printf("Enter the radius of the circle ");
    scanf("%f", &radius );

    perimeter  = 2 * PI * radius ;

    area = PI * radius * radius ;

    printf("Perimeter (Circumference) = %.2f\n", perimeter);
    printf("Area = %.2f\n", area);



}
