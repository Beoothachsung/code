#include <stdio.h>

int tongcuachuso(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    do {
        printf("nhap so nguyen khong am: ");
        scanf("%d", &n);
        if (n >= 0) {
            printf("Tong cac chu so: %d\n", tongcuachuso(n));
        }
    } while (n >= 0);
    return 0;
}
