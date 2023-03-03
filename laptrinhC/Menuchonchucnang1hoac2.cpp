#include <stdio.h>
int isPerfect(int n) {
    int i, sum = 0;
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

int findIndex(int arr[], int n, int size) {
    int i, index = -1;
    for (i = 0; i < size; i++) {
        if (arr[i] == n) {
            index = i;
            break;
        }
    }
    return index;
}

int main(void) {
    int arr[18] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int n, option, size = 18, index;
    printf("Moi ban chon\n");
    printf("1. Tim so hoan hao\n");
    printf("2. Tim vi tri cua n trong mang\n");
    printf("Chon chuc nang (1 hoac 2): ");
    scanf("%d", &option);
    printf("Nhap so n (3 <= n <= 20): ");
    scanf("%d", &n);
    switch (option) {
        case 1:
            if (isPerfect(n)) {
                printf("%d la so hoan hao\n", n);
            } else {
                printf("%d khong phai la so hoan hao\n", n);
            }
            break;
        case 2:
            index = findIndex(arr, n, size);
            if (index != -1) {
                printf("%d o vi tri %d trong mang\n", n, index + 1);
            } else {
                printf("%d khong ton tai trong mang\n", n);
            }
            break;
        default:
            printf("Chon chuc nang sai\n");
            break;
    }
    return 0;
}
