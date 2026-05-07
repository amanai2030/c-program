
//Write a C program that takes hours and minutes as
//input and calculates the total number of minutes.
//The program should then print the total number of
//minutes.
//Hint:
//To calculate the total minutes, multiply the
//number of hours by 60 and then add the minutes.
//Example:
//Input:
//Hours: 5
//Minutes: 37
//Output: Total: 337 minutes.

#include <stdio.h>

int main() {
    int hours, minutes, totalMinutes;


    printf("Enter hours: ");
    scanf("%d", &hours);

    printf("Enter minutes: ");
    scanf("%d", &minutes);


    totalMinutes = (hours * 60) + minutes;


    printf("Total minutes: %d\n", totalMinutes);

    return 0;
}
