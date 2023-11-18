#include <stdio.h>

int main() {
  
    printf("Name: Sharan.B\n");
    printf("Reg No: 192210486\n\n");

    
    int n;

    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    int sum = n * (n + 1) / 2;

   
    printf("Sum of the series 1 to %d: %d\n", n, sum);

    return 0;
}

