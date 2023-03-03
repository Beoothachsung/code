//btap: in ra cac so chan o vi tri chan va sap xep theo thu tu tang dan
#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int a[n];
    int i, j;
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int sochan[n/2];
    int dem = 0;
    for (i = 0; i < n; i += 2) {//vi tri chan
        if (a[i] % 2 == 0) {//so chan
            sochan[dem] = a[i];
            dem++;
        }
    }

    // Sap xep mang so chan tang dan
    for (i = 0; i < dem - 1; i++) {
        for (j = i+1; j < dem; j++) {
            if (sochan[i] > sochan[j]) {
                int temp = sochan[i];
                sochan[i] = sochan[j];
                sochan[j] = temp;
            }
        }
    }

    printf("Cac so chan o vi tri chan trong mang (tang dan): ");
    for (i = 0; i < dem; i++) {
        printf("%d ", sochan[i]);
    }
    printf("\n");
    return 0;
}

