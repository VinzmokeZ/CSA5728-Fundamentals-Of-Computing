#include <stdio.h>

int main() {
   
    int age;
    printf("Enter the age of the person: ");
    scanf("%d", &age);

    
    double ticketCharge;
    if (age >= 55) {
        ticketCharge = 10.00;
    } else if (age >= 21 && age <= 54) {
        ticketCharge = 15.00;
    } else if (age >= 13 && age <= 20) {
        ticketCharge = 10.00;
    } else if (age >= 3 && age <= 12) {
        ticketCharge = 5.00;
    } else {
      
        ticketCharge = 0.00;
    }

   
    printf("Ticket Charge: $%.2lf\n", ticketCharge);

   
    printf("Sharan.B\n");
    printf("Reg No: 192210486\n");

    return 0;
}

