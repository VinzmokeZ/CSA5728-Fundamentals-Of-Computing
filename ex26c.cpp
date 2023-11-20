#include <stdio.h>

int main() {
    int n, i;
    int max, currentNumber;

   
    n = 5;

  
    printf("Name: Sharan.B\n");
    printf("Reg No: 192210486\n");

  
    printf("Enter number 1: ");
    scanf("%d", &max);

    
    for (i = 2; i <= n; i++) {
        
        printf("Enter number %d: ", i);
        scanf("%d", &currentNumber);

        
        if (currentNumber > max) {
            max = currentNumber;
        }
    }

    
    printf("The biggest number is: %d\n", max);

    return 0;
}

