#include <stdio.h>


#define NUM_DAYS 14


void analyzeWindSpeed(int windSpeeds[], int numDays) {
    int totalWindSpeed = 0;
    int highestWindSpeed = windSpeeds[0];
    int lowestWindSpeed = windSpeeds[0];
    int highestWindSpeedDay, lowestWindSpeedDay;

    
    for (int day = 0; day < numDays; ++day) {
        totalWindSpeed += windSpeeds[day];

        if (windSpeeds[day] > highestWindSpeed) {
            highestWindSpeed = windSpeeds[day];
            highestWindSpeedDay = day + 1;  
        }

        if (windSpeeds[day] < lowestWindSpeed) {
            lowestWindSpeed = windSpeeds[day];
            lowestWindSpeedDay = day + 1; 
        }
    }

    
    double averageWindSpeed = (double)totalWindSpeed / numDays;

  
    printf("\nAverage Wind Speed over Two Weeks: %.2lf\n", averageWindSpeed);
    printf("Day with Highest Wind Speed: Day %d\n", highestWindSpeedDay);
    printf("Day with Lowest Wind Speed: Day %d\n", lowestWindSpeedDay);

  
    printf("\nDay\tDifference\n");
    for (int day = 0; day < numDays; ++day) {
        double difference = highestWindSpeed - averageWindSpeed;
        printf("%d\t%.2lf\n", day + 1, difference);  
    }
}

int main() {
   
    printf("Sharan.B\n");
    printf("Reg No: 192210486\n");

    
    int windSpeeds[NUM_DAYS];

   
    printf("Enter the fastest wind speed for each day:\n");
    for (int day = 0; day < NUM_DAYS; ++day) {
        printf("Day %d: ", day + 1);  
        scanf("%d", &windSpeeds[day]);
    }

  
    analyzeWindSpeed(windSpeeds, NUM_DAYS);

    return 0;
}

