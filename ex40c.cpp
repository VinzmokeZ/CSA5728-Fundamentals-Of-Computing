#include <stdio.h>

int main() {
    
    printf("Sharan.B\n");
    printf("Reg No: 192210486\n");

    
    int fillups = 6;
    double totalGallons = 0.0, totalMiles = 0.0;
    int startingOdometer, currentOdometer;

  
    for (int i = 1; i <= fillups; ++i) {
       
        printf("Fillup %d:\n", i);
        printf("Enter number of gallons: ");
        double gallons;
        scanf("%lf", &gallons);
        totalGallons += gallons;

        
        if (i == 1) {
            
            printf("Enter starting odometer reading: ");
            scanf("%d", &startingOdometer);
        } else {
          
            printf("Enter current odometer reading: ");
            scanf("%d", &currentOdometer);

           
            double milesDriven = currentOdometer - startingOdometer;
            totalMiles += milesDriven;

           
            startingOdometer = currentOdometer;
        }
    }

   
    double averageMPG = totalMiles / totalGallons;

   
    printf("\nAverage Miles Per Gallon: %.2lf\n", averageMPG);

    return 0;
}

