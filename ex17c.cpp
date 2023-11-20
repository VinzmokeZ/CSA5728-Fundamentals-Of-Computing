#include <stdio.h>

int main() {
    printf("Name: Sharan.B\n");
    printf("Reg No: 192210486\n\n");

    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Digits of %d are:\n", num);

    
    while (num != 0) {
        int digit = num % 10;
        printf("%d\n", digit);
        num /= 10;
    }

    return 0;
}

