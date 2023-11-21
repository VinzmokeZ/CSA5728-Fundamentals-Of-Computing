#include <stdio.h>


#define MAX_ALUMNI 95
#define MAX_STRING_LENGTH 50


struct Alumni {
    int age;
    char gender;
    char maritalStatus[MAX_STRING_LENGTH];
    char collegeMajor[MAX_STRING_LENGTH];
    double salary;
};


void initializeAlumni(struct Alumni alumni[], int numAlumni) {
    for (int i = 0; i < numAlumni; ++i) {
        alumni[i].age = 0;
        alumni[i].gender = '\0';
        alumni[i].maritalStatus[0] = '\0';
        alumni[i].collegeMajor[0] = '\0';
        alumni[i].salary = 0.0;
    }
}


void inputAlumni(struct Alumni alumni[], int numAlumni) {
    for (int i = 0; i < numAlumni; ++i) {
        printf("Enter information for Alumni %d:\n", i + 1);
        printf("Age: ");
        scanf("%d", &alumni[i].age);
        printf("Gender (M/F): ");
        scanf(" %c", &alumni[i].gender);
        printf("Marital Status: ");
        scanf("%s", alumni[i].maritalStatus);
        printf("College Major: ");
        scanf("%s", alumni[i].collegeMajor);
        printf("Salary: $");
        scanf("%lf", &alumni[i].salary);
    }
}


double calculateAverageSalary(struct Alumni alumni[], int numAlumni, char item1[], char item2[]) {
    double totalSalary = 0.0;
    int count = 0;

    for (int i = 0; i < numAlumni; ++i) {
        if (strcmp(alumni[i].maritalStatus, item1) == 0 || strcmp(alumni[i].collegeMajor, item1) == 0) {
            if (strcmp(alumni[i].gender, item2) == 0 || strcmp(alumni[i].collegeMajor, item2) == 0) {
                totalSalary += alumni[i].salary;
                count++;
            }
        }
    }

  
    return (count > 0) ? totalSalary / count : 0.0;
}

int main() {
    // Print heading
    printf("Sharan.B\n");
    printf("Reg No: 192210486\n");

   
    struct Alumni alumni[MAX_ALUMNI];

    
    inputAlumni(alumni, MAX_ALUMNI);

    
    char item1[MAX_STRING_LENGTH], item2[MAX_STRING_LENGTH];

    printf("\nEnter the first set of items (Marital Status or College Major): ");
    scanf("%s", item1);
    printf("Enter the second set of items (Gender or College Major): ");
    scanf("%s", item2);

  
    double averageSalary = calculateAverageSalary(alumni, MAX_ALUMNI, item1, item2);
    printf("\nAverage Salary: $%.2lf\n", averageSalary);

    return 0;
}

