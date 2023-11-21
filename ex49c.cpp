#include <stdio.h>


#define NUM_CLASS_LEVELS 5
#define NUM_MAJORS 7
#define TOTAL_STUDENTS 1200


enum ClassLevel {
    FRESHMAN,
    SOPHOMORE,
    JUNIOR,
    SENIOR,
    GRADUATE
};


enum Major {
    NO_MAJOR,
    MAJOR1,
    MAJOR2,
    MAJOR3,
    MAJOR4,
    MAJOR5,
    MAJOR6,
    MAJOR7
};


void initializeCountArray(int countArray[NUM_CLASS_LEVELS][NUM_MAJORS]) {
    for (int i = 0; i < NUM_CLASS_LEVELS; ++i) {
        for (int j = 0; j < NUM_MAJORS; ++j) {
            countArray[i][j] = 0;
        }
    }
}


void inputStudentInformation(int countArray[NUM_CLASS_LEVELS][NUM_MAJORS]) {
    for (int i = 0; i < TOTAL_STUDENTS; ++i) {
        int classLevel, major;

        printf("Enter class level for student %d (0-Freshman, 1-Sophomore, 2-Junior, 3-Senior, 4-Graduate): ", i + 1);
        scanf("%d", &classLevel);

        if (classLevel == GRADUATE) {
            major = NO_MAJOR;  
        } else {
            printf("Enter major for student %d (0-No Major, 1-Major1, 2-Major2, ..., 6-Major6, 7-Major7): ", i + 1);
            scanf("%d", &major);
        }

        
        if (classLevel < 0 || classLevel >= NUM_CLASS_LEVELS || (classLevel != GRADUATE && (major < 0 || major >= NUM_MAJORS))) {
            printf("Invalid input. Please enter valid class level and major.\n");
            --i;  
        } else {
            countArray[classLevel][major]++;
        }
    }
}


void outputStudentCounts(int countArray[NUM_CLASS_LEVELS][NUM_MAJORS]) {
    printf("\nClass Level\tMajor\tCount\n");
    for (int i = 0; i < NUM_CLASS_LEVELS; ++i) {
        for (int j = 0; j < NUM_MAJORS; ++j) {
            printf("%d\t\t%d\t%d\n", i, j, countArray[i][j]);
        }
    }
}

int main() {
   
    printf("Sharan.B\n");
    printf("Reg No: 192210486\n");

    
    int studentCountArray[NUM_CLASS_LEVELS][NUM_MAJORS];
    initializeCountArray(studentCountArray);

   
    inputStudentInformation(studentCountArray);

    
    outputStudentCounts(studentCountArray);

    return 0;
}

