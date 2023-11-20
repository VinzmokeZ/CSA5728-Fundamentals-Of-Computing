#include <stdio.h>

int main() {
    int a, b, c;

    
    a = 10;
    b = 20;
    c = 30;

   
    printf("Name: Sharan.B\n");
    printf("Reg No: 192210486\n");

   
    printf("Before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

   
    a = a + b + c;
    b = a - b - c;
    c = a - b - c;
    a = a - b - c;

    
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;
}

