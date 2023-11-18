#include <stdio.h>

int main() {
    
    printf("Name: Sharan.B\n");
    printf("Reg No: 192210486\n\n");

   
    int n;

    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Number Series 1 to %d:\n", n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}

