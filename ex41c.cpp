#include <stdio.h>

int main() {
   
    printf("Sharan.B\n");
    printf("Reg No: 192210486\n");

   
    int numCourses;
    double totalGradePoints = 0.0, totalCredits = 0.0;

   
    printf("Enter the number of courses: ");
    scanf("%d", &numCourses);

   
    for (int i = 1; i <= numCourses; ++i) {
        char grade;
        double credits;

        
        printf("Enter grade for course %d (A, B, C, D, F): ", i);
        scanf(" %c", &grade);

       
        if (!(grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D' || grade == 'F')) {
            printf("Invalid grade entered. Please enter A, B, C, D, or F.\n");
            return 1;  
        }

        
        printf("Enter credits for course %d: ", i);
        scanf("%lf", &credits);

       
        double gradePoints;
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
        }

        
        totalGradePoints += gradePoints * credits;
        totalCredits += credits;
    }

    
    if (totalCredits > 0) {
        double gpa = totalGradePoints / totalCredits;
        printf("Grade Point Average: %.2lf\n", gpa);
    } else {
        printf("No credits entered. Cannot calculate GPA.\n");
    }

    return 0;
}

