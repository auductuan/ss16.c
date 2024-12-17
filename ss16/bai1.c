#include <stdio.h>

int main() {
    int a = 10;         
    int *ptr = &a;      
// cach 1:
    printf("Cach 1:\n");
    printf("Gia tri cua a: %d\n", a);
    printf("Dia chi cua a: %p\n", (void*)&a);
// cach 2:
    printf("\nCach 2:\n");
    printf("Gia tri cua a thong qua con tro: %d\n", *ptr);
    printf("Dia chi cua a thong qua con tro: %p\n", (void*)ptr);

    return 0;
}

