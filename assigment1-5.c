
//Description:
//Write a C program that takes the total selling price
//of 15 items and the total profit earned on them as
//input. The program should calculate and print the
//cost price of one item.

//Hint:
//First, calculate the total cost price by subtracting
//the total profit from the total selling price. Then,
//divide the total cost price by 15 to get the cost
//price of one item.
#include <stdio.h>

int main() {
    float total_selling_price;
    float total_profit;
    float total_cost_price;
    float cost_price_per_item;


    printf("Enter the total selling price of 15 items: ");
    scanf("%f", &total_selling_price);

    printf("Enter the total profit earned on the 15 items: ");
    scanf("%f", &total_profit);


    total_cost_price = total_selling_price - total_profit;


    cost_price_per_item = total_cost_price / 15.0;


    printf("\nTotal Cost Price: %.2f\n", total_cost_price);
    printf("The cost price of one item is: %.2f\n", cost_price_per_item);


}
