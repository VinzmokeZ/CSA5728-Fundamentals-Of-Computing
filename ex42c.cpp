#include <stdio.h>

int main() {
    
    printf("Sharan.B\n");
    printf("Reg No: 192210486\n");

    
    const int maxStudents = 35;
    const int numQuestions = 20;
    int correctAnswers[numQuestions];
    int studentIDs[maxStudents];
    int numCorrect[maxStudents];
    char grades[maxStudents];
    int bestScore = 0;

    
    printf("Enter correct answers for the test (0 for False, 1 for True):\n");
    for (int i = 0; i < numQuestions; ++i) {
        printf("Question %d: ", i + 1);
        scanf("%d", &correctAnswers[i]);
    }

    
    int numStudents;
    printf("Enter the number of students (up to %d): ", maxStudents);
    scanf("%d", &numStudents);

    
    if (numStudents < 1 || numStudents > maxStudents) {
        printf("Invalid number of students. Please enter a number between 1 and %d.\n", maxStudents);
        return 1; 
    }

    
    for (int i = 0; i < numStudents; ++i) {
      
        printf("Enter student ID for student %d: ", i + 1);
        scanf("%d", &studentIDs[i]);

        
        int studentAnswers[numQuestions];
        printf("Enter test answers for student %d (0 for False, 1 for True):\n", studentIDs[i]);
        for (int j = 0; j < numQuestions; ++j) {
            printf("Question %d: ", j + 1);
            scanf("%d", &studentAnswers[j]);
        }

      
        numCorrect[i] = 0;
        for (int j = 0; j < numQuestions; ++j) {
            if (studentAnswers[j] == correctAnswers[j]) {
                numCorrect[i]++;
            }
        }

       
        if (numCorrect[i] > bestScore) {
            bestScore = numCorrect[i];
        }

        
        if (numCorrect[i] >= bestScore || numCorrect[i] < (bestScore - 8)) {
            grades[i] = 'F';
        } else if (numCorrect[i] >= (bestScore - 2)) {
            grades[i] = 'A';
        } else if (numCorrect[i] >= (bestScore - 4)) {
            grades[i] = 'B';
        } else if (numCorrect[i] >= (bestScore - 6)) {
            grades[i] = 'C';
        } else if (numCorrect[i] >= (bestScore - 8)) {
            grades[i] = 'D';
        }
    }

    
    printf("\nStudent ID\tNumber Correct\tGrade\n");
    for (int i = 0; i < numStudents; ++i) {
        printf("%d\t\t%d\t\t%c\n", studentIDs[i], numCorrect[i], grades[i]);
    }

    printf("\nBest Score for the Class: %d\n", bestScore);

    return 0;
}

