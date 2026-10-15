/*4.19 (Calculating Sales) An online retailer sells five different products whose retail prices are shown in the following table: 

 PRODUCT NUMBER | RETAIL PRICE
 1                 $2.98
 2                 $4.50
 3                 $9.98
 4                 $4.49
 5                 $6.87​ 

Write a program that reads a series of pairs of numbers as follows: 

a) Product number 

b) Quantity sold for one day 

Your program should use a switch statement to help determine the retail price for each product. 

Your program should calculate and display the total retail value of all products sold last week. */


#include <stdio.h>

int main() {
    int product_no, qty_sold;
    double total_retail = 0.0; // Accumulator for total retail value

    printf("--- Online Retailer Sales Calculator ---\n");
    printf("Enter product number (1-5) and quantity sold. Enter 0 to finish.\n\n");

    while (1) {
        printf("Enter product number (1-5, or 0 to exit): ");
        if (scanf("%d", &product_no) != 1) {
            break;
        }

        // Sentinel value to end input
        if (product_no == 0) {
            break;
        }

        if (product_no >= 1 && product_no <= 5) {
            printf("Enter quantity sold: ");
            scanf("%d", &qty_sold);

            // Use switch to determine price and add to total
            switch (product_no) {
                case 1:
                    total_retail += qty_sold * 2.98;
                    break;
                case 2:
                    total_retail += qty_sold * 4.50;
                    break;
                case 3:
                    total_retail += qty_sold * 9.98;
                    break;
                case 4:
                    total_retail += qty_sold * 4.49;
                    break;
                case 5:
                    total_retail += qty_sold * 6.87;
                    break;
            }
        } else {
            printf("Invalid Entry! Please enter a product number between 1 and 5.\n");
        }
    }

    // Display the final calculated total retail value
    printf("\n----------------------------------------\n");
    printf("Total retail value of all products sold last week: $%.2f\n", total_retail);
    printf("----------------------------------------\n");

    return 0;
}