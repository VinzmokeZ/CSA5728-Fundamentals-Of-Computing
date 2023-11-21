#include <stdio.h>

int main() {
    
    double cubicFeet;
    printf("Enter the cubic feet of water used: ");
    scanf("%lf", &cubicFeet);

    
    double waterBill;
    if (cubicFeet <= 1000) {
        waterBill = 15.00;
    } else if (cubicFeet <= 2000) {
        waterBill = 15.00 + (0.0175 * (cubicFeet - 1000));
    } else if (cubicFeet <= 3000) {
        waterBill = 15.00 + (0.0175 * 1000) + (0.02 * (cubicFeet - 2000));
    } else {
        waterBill = 70.00;
    }

    
    printf("Water Bill: $%.2lf\n", waterBill);

    
    printf("Sharan.B\n");
    printf("Reg No: 192210486\n");

    return 0;
}

