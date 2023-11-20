#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {10, 5, 8, 2, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 8;
    int result;

    
    printf("Name: Sharan.B\n");
    printf("Reg No: 192210486\n");

    
    result = linearSearch(arr, size, key);

    
    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}

