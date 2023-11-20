#include <stdio.h>

int main() {
    printf("Name: Sharan.B\n");
    printf("Reg No: 192210486\n\n");

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int product = 1;

    for (int i = 1; i <= n; i++) {
        product *= i;
    }

    printf("Product series (Factorial) of %d is: %d\n", n, product);

    return 0;
}

