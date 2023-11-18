#include <stdio.h>

int main() {
    
    printf("Name: Sharan.B\n");
    printf("Reg No: 192210486\n\n");

    
    int n;

    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i * i; 
    }

   
    printf("Sum of the series 1^2 + 2^2 + 3^2 + 4^2 + ... + %d^2: %d\n", n, sum);

    return 0;
}

