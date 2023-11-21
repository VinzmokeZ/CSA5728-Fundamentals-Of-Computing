#include <stdio.h>

int main() {
   
    printf("Sharan.B\n");
    printf("Reg No: 192210486\n");

    
    double initialPrice, totalCost, salesTax;
    int numAccessories;

    
    printf("Enter the initial price of the car: $");
    scanf("%lf", &initialPrice);

  
    printf("Enter the number of accessories (0 to 10): ");
    scanf("%d", &numAccessories);

   
    totalCost = initialPrice;  

    
    const double accessoryCost = 100.0;
    if (numAccessories >= 0 && numAccessories <= 10) {
        totalCost += numAccessories * accessoryCost;
    } else {
        printf("Invalid number of accessories. Please enter a number between 0 and 10.\n");
        return 1;  
    }

    
    printf("Enter the sales tax rate (in percentage): ");
    scanf("%lf", &salesTax);

    
    totalCost += (salesTax / 100) * totalCost;

  
    printf("Total cost of the car: $%.2lf\n", totalCost);

    return 0;
}

