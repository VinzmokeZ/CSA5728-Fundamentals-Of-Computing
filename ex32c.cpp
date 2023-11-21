#include <stdio.h>


int SumOfDigits(int number) {
    int sum = 0;
    while (number > 0) {
        sum = sum + (number % 10);
        number = number / 10;
    }
    return sum;
}

int main() {
   
    int originalNumber;
    printf("Enter a four-digit number: ");
    scanf("%d", &originalNumber);

    
    int sumDigits = SumOfDigits(originalNumber);

    
    int checkDigit = (sumDigits % 2 == 0) ? 0 : 1;

   
    int newNumber = originalNumber * 10 + checkDigit;

    
    printf("Original Number: %d\n", originalNumber);
    printf("New Number: %d\n", newNumber);

    
    printf("Sharan.B\n");
    printf("Reg No: 192210486\n");

    return 0;
}

