#include <stdio.h>

void addElement(int *x, int *y) {
    int temp = *x; 
    *x = *y;       
    *y = temp;    
}

int main() {
    int a = 5; 
    int b = 10; 
    printf("Truoc khi doi:  %d\n", a, b);
    addElement(&a, &b);
    printf("Sau khi doi: a = %d, b = %d\n", a, b);

    return 0;
}

