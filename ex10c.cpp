#include <stdio.h>

int main() {
    printf("Name: Sharan.B\n");
    printf("Reg No: 192210486\n\n");

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;

    for (int i = 2; i <= n; i += 2) {
        sum += i * i;
    }

    printf("Sum of the series 2^2 + 4^2 + 6^2 + 8^2 + ... + %d^2: %d\n", n, sum);

    return 0;
}

