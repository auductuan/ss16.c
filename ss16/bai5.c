#include <stdio.h>

void updateElement(int *array, int length, int newValue, int position) {
    if (position >= 0 && position < length) {
        array[position] = newValue;
    } else {
        printf("Vi tri %d khong hop le.\n", position);
    }
}

void printArray(int *array, int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    printf("Mang truoc khi cap nhat: ");
    printArray(arr, size);
    
    int newValue = 99; 
    int position = 2;  
    updateElement(arr, size, newValue, position);
    printf("Mang sau khi cap nhat: ");
    printArray(arr, size);

    return 0;
}

