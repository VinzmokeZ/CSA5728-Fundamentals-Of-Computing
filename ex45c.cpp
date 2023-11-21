#include <stdio.h>

int main() {
    23
    2
    printf("Sharan.B\n");
    printf("Reg No: 192210486\n");

    
    const int numStudents = 25;
    const int numTests = 5;  

    
    int testGrades[numStudents][numTests];

    
    printf("Enter test grades for each student:\n");
    for (int student = 0; student < numStudents; ++student) {
        printf("Student %d:\n", student + 1);
        for (int test = 0; test < numTests; ++test) {
            printf("Enter grade for test %d: ", test + 1);
            scanf("%d", &testGrades[student][test]);
        }
    }

   
    int studentNumber, testNumber;
    printf("\nEnter student number (1 to %d): ", numStudents);
    scanf("%d", &studentNumber);

    
    if (studentNumber < 1 || studentNumber > numStudents) {
        printf("Invalid student number. Please enter a number between 1 and %d.\n", numStudents);
        return 1;  
    }

    printf("Enter test number (1 to %d): ", numTests);
    scanf("%d", &testNumber);

    
    if (testNumber < 1 || testNumber > numTests) {
        printf("Invalid test number. Please enter a number between 1 and %d.\n", numTests);
        return 1;  
    }

 
    int grade = testGrades[studentNumber - 1][testNumber - 1];
    printf("\nGrade for Student %d on Test %d: %d\n", studentNumber, testNumber, grade);

    return 0;
}

