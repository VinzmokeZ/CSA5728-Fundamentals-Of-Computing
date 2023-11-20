#include <stdio.h>
#include <math.h>

int main() {
    double x, result, term;
    int n, i, fact;

   
    x = 0.5; 
    n = 5;   

   
    printf("Name: Sharan.B\n");
    printf("Reg No: 192210486\n");

    
    result = 0;

    
    for (i = 0; i < n; i++) {
        
        fact = 1;
        for (int j = 1; j <= 2 * i + 1; j++) {
            fact *= j;
        }

        
        term = pow(-1, i) * pow(x, 2 * i + 1) / fact;

        
        result += term;
    }

    
    printf("The result of the sine series for x = %f is: %f\n", x, result);

    return 0;
}

