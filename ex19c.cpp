#include <stdio.h>

int reverseDigits(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

int main() {
    int number = 12345;  

   
    printf("Name: Sharan.B\n");
    printf("Reg No: 192210486\n");

    
    printf("Original Number: %d\n", number);
    int reversedNumber = reverseDigits(number);
    printf("Reversed Number: %d\n", reversedNumber);

    return 0;
}

