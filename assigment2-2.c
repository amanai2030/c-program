//description:Write a C program that converts a temperaturefrom Centigrade to Fahrenheit.
//The programshould take the temperature in Centigrade as inputand print
//the corresponding temperature inFahrenheit.
//Hint:Use the following formula to convert Centigradeto Fahrenheit:Fahrenheit=(9%C3%97Centigrade)/5 +32
//Example:Input: 45Output: 113.000000 degrees Fahrenheit.


#include <stdio.h>

int main() {
    float centigrade, fahrenheit;


    printf("Enter temperature in Centigrade: ");
    scanf("%f", &centigrade);


    fahrenheit = (9 * centigrade) / 5 + 32;


    printf("%.6f degrees Fahrenheit.\n", fahrenheit);

    return 0;
}
