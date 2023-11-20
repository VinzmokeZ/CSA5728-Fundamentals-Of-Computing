#include <stdio.h>

int main() {
    printf("Name: Sharan.B\n");
    printf("Reg No: 192210486\n\n");

    int n, i;
    float sum = 0, average;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for (i = 1; i <= n; ++i) {
        float num;
        printf("Enter number %d: ", i);
        scanf("%f", &num);

        sum += num;
    }

    average = sum / n;

    printf("Sum of the numbers is: %.2f\n", sum);
    printf("Average of the numbers is: %.2f\n", average);

    return 0;
}

