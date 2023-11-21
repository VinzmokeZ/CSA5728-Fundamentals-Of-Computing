#include <stdio.h>

int main() {
   
    printf("Sharan.B\n");
    printf("Reg No: 192210486\n");

  
    char grade;
    int units;
    float totalPoints = 0.0, totalUnits = 0.0;

    
    printf("Enter grades and units. Use 'X 0' to end input.\n");

    
    while (1) {
       
        scanf(" %c %d", &grade, &units);

        
        if (grade == 'X' && units == 0) {
            break;
        }

        
        float gradePoints;
        switch (grade) {
            case 'A':
                gradePoints = 4.0;
                break;
            case 'B':
                gradePoints = 3.0;
                break;
            case 'C':
                gradePoints = 2.0;
                break;
            case 'D':
                gradePoints = 1.0;
                break;
            case 'F':
                gradePoints = 0.0;
                break;
            default:
                printf("Invalid grade entered.\n");
                continue;  
        }

       
        totalPoints += gradePoints * units;
        totalUnits += units;
    }

  
    if (totalUnits > 0) {
        float gpa = totalPoints / totalUnits;
        printf("GPA for the semester: %.2f\n", gpa);
    } else {
        printf("No units entered. GPA cannot be calculated.\n");
    }

    return 0;
}

