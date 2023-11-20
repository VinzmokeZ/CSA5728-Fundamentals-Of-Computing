#include <stdio.h>

int main() {
    int number = -5;  

   
    printf("Name: Sharan.B\n");
    printf("Reg No: 192210486\n");

    
    if (number > 0) {
        printf("%d is a positive number.\n", number);
    } else if (number < 0) {
        printf("%d is a negative number.\n", number);
    } else {
        printf("%d is zero.\n", number);
    }

    return 0;
}

