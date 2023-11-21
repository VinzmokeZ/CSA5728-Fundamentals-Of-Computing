#include <stdio.h>
#include <string.h>


int searchStudent(char studentNames[][50], int numStudents, char targetName[]) {
    for (int i = 0; i < numStudents; ++i) {
        if (strcmp(studentNames[i], targetName) == 0) {
            return i; 
        }
    }
    return -1;  
}

int main() {
  
    printf("Sharan.B\n");
    printf("Reg No: 192210486\n");

    
    const int numStudents = 5; 
    const int numTests = 4;

    
    char studentNames[numStudents][50] = {
        "John Doe", "Jane Smith", "Bob Johnson", "Alice Brown", "Charlie Wilson"
    };

    int testScores[numStudents][numTests] = {
        {90, 85, 88, 92},
        {78, 92, 88, 90},
        {85, 76, 80, 88},
        {92, 89, 94, 91},
        {80, 82, 75, 88}
    };

   
    char targetName[50];
    printf("Enter student name to search for: ");
    fgets(targetName, sizeof(targetName), stdin);
    targetName[strcspn(targetName, "\n")] = '\0'; 

   
    int index = searchStudent(studentNames, numStudents, targetName);

  
    if (index != -1) {
        printf("\nStudent Name: %s\n", studentNames[index]);
        printf("Test Scores: ");
        for (int test = 0; test < numTests; ++test) {
            printf("%d ", testScores[index][test]);
        }
        printf("\n");
    } else {
        printf("\nStudent not found.\n");
    }

    return 0;
}

