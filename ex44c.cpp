#include <stdio.h>

int main() {
    
    3
    printf("Sharan.B\n");
    printf("Reg No: 192210486\n");

   
    const int salespeople = 10;
    const int daysPerWeek = 7;
    const int daysOffPerSalesperson = 2;

    
    double salesData[salespeople][daysPerWeek];

   
    for (int person = 0; person < salespeople; ++person) {
        printf("Enter sales data for salesperson %d:\n", person + 1);
        for (int day = 0; day < daysPerWeek; ++day) {
            printf("Enter sales for day %d: $", day + 1);
            scanf("%lf", &salesData[person][day]);
        }
    }

    
    printf("\nAverage Sales per Salesperson for the Week:\n");
    for (int person = 0; person < salespeople; ++person) {
        double totalSales = 0.0;
        for (int day = 0; day < daysPerWeek; ++day) {
            totalSales += salesData[person][day];
        }
        double averageSales = totalSales / (daysPerWeek - daysOffPerSalesperson);
        printf("Salesperson %d: $%.2lf\n", person + 1, averageSales);
    }

  
    printf("\nTotal Sales for the Store:\n");
    for (int day = 0; day < daysPerWeek; ++day) {
        double totalSales = 0.0;
        for (int person = 0; person < salespeople; ++person) {
            totalSales += salesData[person][day];
        }
        printf("Day %d: $%.2lf\n", day + 1, totalSales);
    }

    return 0;
}

