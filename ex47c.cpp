#include <stdio.h>


#define NUM_DEPARTMENTS 12
#define MAX_EMPLOYEES_PER_DEPARTMENT 100


struct Employee {
    char gender;
    int age;
    double wages;
};


struct Department {
    char name[50];
    int numEmployees;
    int numWomen;
    int numMen;
    double totalWagesWomen;
    double totalWagesMen;
    double averageAgeWomen;
    double averageAgeMen;
    struct Employee employees[MAX_EMPLOYEES_PER_DEPARTMENT];
};


void calculateGenderStatistics(struct Department *department) {
    for (int i = 0; i < department->numEmployees; ++i) {
        if (department->employees[i].gender == 'F') {
            department->numWomen++;
            department->totalWagesWomen += department->employees[i].wages;
            department->averageAgeWomen += department->employees[i].age;
        } else if (department->employees[i].gender == 'M') {
            department->numMen++;
            department->totalWagesMen += department->employees[i].wages;
            department->averageAgeMen += department->employees[i].age;
        }
    }

    if (department->numWomen > 0) {
        department->averageAgeWomen /= department->numWomen;
    }

    if (department->numMen > 0) {
        department->averageAgeMen /= department->numMen;
    }
}

int main() {
    
    printf("Sharan.B\n");
    printf("Reg No: 192210486\n");

   
    struct Department departments[NUM_DEPARTMENTS] = {
        {"Dept1"}, {"Dept2"}, {"Dept3"}, {"Dept4"}, {"Dept5"}, {"Dept6"},
        {"Dept7"}, {"Dept8"}, {"Dept9"}, {"Dept10"}, {"Dept11"}, {"Dept12"}
    };

  
    for (int i = 0; i < NUM_DEPARTMENTS; ++i) {
        printf("Enter number of employees for %s: ", departments[i].name);
        scanf("%d", &departments[i].numEmployees);

        printf("Enter employee information for %s:\n", departments[i].name);
        for (int j = 0; j < departments[i].numEmployees; ++j) {
            printf("Employee %d:\n", j + 1);
            printf("Gender (F/M): ");
            scanf(" %c", &departments[i].employees[j].gender);
            printf("Age: ");
            scanf("%d", &departments[i].employees[j].age);
            printf("Wages: $");
            scanf("%lf", &departments[i].employees[j].wages);
        }

        calculateGenderStatistics(&departments[i]);
    }

    
    printf("\nDepartment\tNum Employees\tNum Women\tNum Men\tAvg Age Women\tAvg Age Men\tTotal Wages Women\tTotal Wages Men\n");
    for (int i = 0; i < NUM_DEPARTMENTS; ++i) {
        printf("%s\t\t%d\t\t%d\t\t%d\t\t%.2lf\t\t%.2lf\t\t%.2lf\t\t\t%.2lf\n",
               departments[i].name, departments[i].numEmployees,
               departments[i].numWomen, departments[i].numMen,
               departments[i].averageAgeWomen, departments[i].averageAgeMen,
               departments[i].totalWagesWomen, departments[i].totalWagesMen);
    }

    return 0;
}

