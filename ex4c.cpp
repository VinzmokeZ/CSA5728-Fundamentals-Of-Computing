#include <stdio.h>

int main() {
    
    printf("Name: Sharan.B\n");
    printf("Reg No: 192210486\n\n");

   
    int n;

    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d:\n", n);

    int first = 0, second = 1, next;

    printf("%d %d ", first, second);

    for (int i = 2; i <= n; ++i) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }

    return 0;
}

