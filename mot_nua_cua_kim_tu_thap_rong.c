//btap: Nhap h [h la chieu cao cua kim tu thap (h < 20)]. In ra mot nua cua kim tu thap rong
#include <stdio.h>
int main() {
    int h, i, j;
    printf("Nhap chieu cao cua kim tu thap: ");
    scanf("%d", &h);
    // In nua kim tu thap rong
    for (i = 1; i <= h; i++) {
        // In cac ky tu tren hang i
        for (j = 1; j <= i; j++) {
            if (j == 1 || i == h || j == i) {
                // In ky tu '*' o vi tri dau tien, cuoi cung hoac tren hang cuoi cung
                printf("*");
            } else {
                // In khoang trang o cac vi tri khac
                printf(" ");
            }
        }
        // Ket thuc hang i
        printf("\n");
    }
    return 0;
}

