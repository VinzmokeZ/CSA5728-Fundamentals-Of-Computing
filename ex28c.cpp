#include <stdio.h>
#include <math.h>

int main() {
    double x, result = 1.0;

    
    x = 1.0;

    
    printf("Name: Sharan.B\n");
    printf("Reg No: 192210486\n");

    
    printf("Value of x (in radians): %lf\n", x);

   
    for (int i = 2; i <= 10; i += 2) {
        double term = pow(x, i) / tgamma(i + 1); 
        if (i % 4 == 2) {
            result -= term;
        } else {
            result += term;
        }
    }

   
    printf("cos(%lf) = %lf\n", x, result);

    return 0;
}

