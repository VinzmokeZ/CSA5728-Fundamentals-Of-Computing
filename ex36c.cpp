#include <stdio.h>

int main() {
    
    printf("Sharan.B\n");
    printf("Reg No: 192210486\n");

    
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;

    
    for (int i = 1; i <= 200; ++i) {
        
        int studentNumber;
        double numberGrade;
        printf("Enter student number for student %d: ", i);
        scanf("%d", &studentNumber);
        printf("Enter number grade for student %d: ", i);
        scanf("%lf", &numberGrade);

        
        char letterGrade;
        if (numberGrade >= 90.0 && numberGrade <= 100.0) {
            letterGrade = 'A';
            countA++;
        } else if (numberGrade >= 78.0 && numberGrade <= 89.0) {
            letterGrade = 'B';
            countB++;
        } else if (numberGrade >= 65.0 && numberGrade <= 77.0) {
            letterGrade = 'C';
            countC++;
        } else if (numberGrade >= 50.0 && numberGrade <= 64.0) {
            letterGrade = 'D';
            countD++;
        } else {
            letterGrade = 'F';
            countF++;
        }

       
        printf("Student Number: %d, Number Grade: %.2lf, Letter Grade: %c\n", studentNumber, numberGrade, letterGrade);
    }

    
    printf("Total Number of As: %d\n", countA);
    printf("Total Number of Bs: %d\n", countB);
    printf("Total Number of Cs: %d\n", countC);
    printf("Total Number of Ds: %d\n", countD);
    printf("Total Number of Fs: %d\n", countF);

    return 0;
}

