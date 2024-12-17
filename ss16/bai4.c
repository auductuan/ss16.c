#include <stdio.h>

void printArray(int *array, int length) {
    for (int i = 0; i < length; i++) {
        printf("Phan tu thu %d: %d\n", i, *(array + i));
    }
}

int main() {
    int arr[] = {10, 20, 30, 40}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    printArray(arr, size);

    return 0;
}

