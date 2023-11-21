#include <stdio.h>

int main() {
    
    int numberOfPeople, isCompanyBusiness, age;
    printf("Enter the number of people: ");
    scanf("%d", &numberOfPeople);
    printf("Is the customer on company business? (1 for Yes, 0 for No): ");
    scanf("%d", &isCompanyBusiness);
    printf("Enter the age of the customer: ");
    scanf("%d", &age);

    
    double baseCost;
    if (numberOfPeople == 2) {
        baseCost = 85.00;
    } else if (numberOfPeople == 3) {
        baseCost = 90.00;
    } else if (numberOfPeople == 4) {
        baseCost = 95.00;
    } else {
        
        baseCost = 95.00 + (6.00 * (numberOfPeople - 4));
    }

    
    double totalCost = baseCost;
    if (isCompanyBusiness == 1) {
        totalCost *= 0.8;  
    } else if (age > 60) {
        totalCost *= 0.85;  
    }

   
    printf("Cost of the room: $%.2lf\n", totalCost);

   
    printf("Sharan.B\n");
    printf("Reg No: 192210486\n");

    return 0;
}

