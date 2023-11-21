#include <stdio.h>

int main() {
    
    printf("Sharan.B\n");
    printf("Reg No: 192210486\n");

   
    const int minEmployees = 3;
    const int employeesPer20Customers = 1;
    const int hoursPerDay = 24;
    const int days = 14;

    
    int customers[hoursPerDay][days];
    int totalCustomers[hoursPerDay] = {0};

    
    for (int day = 0; day < days; ++day) {
        printf("Day %d:\n", day + 1);
        for (int hour = 0; hour < hoursPerDay; ++hour) {
            printf("Enter number of customers for hour %d: ", hour + 1);
            scanf("%d", &customers[hour][day]);
            totalCustomers[hour] += customers[hour][day];
        }
    }

   
    double averageCustomers[hoursPerDay];
    for (int hour = 0; hour < hoursPerDay; ++hour) {
        averageCustomers[hour] = (double)totalCustomers[hour] / days;
    }

   
    printf("\nHour\tNeeded Employees\n");
    for (int hour = 0; hour < hoursPerDay; ++hour) {
        int neededEmployees = minEmployees + (averageCustomers[hour] / 20) * employeesPer20Customers;
        printf("%d\t%d\n", hour + 1, neededEmployees);
    }

    return 0;
}

