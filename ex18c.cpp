#include <stdio.h>

int main() {
    printf("Name: Sharan.B\n");
    printf("Reg No: 192210486\n\n");

    int num, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

   9
    while (num != 0) {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("Sum of the digits: %d\n", sum);

    return 0;
}

