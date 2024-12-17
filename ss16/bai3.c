#include <stdio.h>

void addElements(int *x, int *y, int *result) {
    *result = *x + *y;
}
int main() {
    int a = 5;      
    int b = 10;     
    int sum = 0;   
    addElements(&a, &b, &sum);
    printf("Tong cua %d va %d la: %d\n", a, b, sum);

    return 0;
}

