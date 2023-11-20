#include <stdio.h>
#include <math.h>

int main() {
    double x, sum = 0.0, term;
    int i, n;

    
    x = 1.0; 
    n = 10;  
    
    printf("Name: Sharan.B\n");
    printf("Reg No: 192210486\n");

    
    printf("Angle (x): %.2f\n", x);
    printf("Number of terms (n): %d\n", n);

   
    for (i = 0; i < n; i++) {
        term = pow(-1, i) * pow(x, 2 * i + 1) / tgamma(2 * i + 2); 
        sum += term;
    }

    
    printf("Sine value using series: %.4f\n", sum);

    return 0;
}

