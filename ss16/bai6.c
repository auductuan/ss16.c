#include <stdio.h>

int timViTriPhanTu(int *mang, int doDai, int giaTriCanTim) {
    for (int i = 0; i < doDai; i++) {
        if (*(mang + i) == giaTriCanTim) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int mang[] = {15, 25, 35, 45, 55}; 
    int kichThuoc = sizeof(mang) / sizeof(mang[0]); 
    int giaTriTimKiem = 35; 
    int viTri = timViTriPhanTu(mang, kichThuoc, giaTriTimKiem);
    if (viTri != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d trong mang.\n", giaTriTimKiem, viTri);
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", giaTriTimKiem);
    }

    return 0;
}
