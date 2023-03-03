//ban quyen bai workshop3: Tuan Du
#include <stdio.h>
void nhapmatran(int a[][5], int m, int n);
void hienthimatran(int a[][5], int m, int n);
void sapxeptangtrenmoihang(int a[][5], int m, int n);
float tinhtrungbinhcongcacsochan(int a[][5], int m, int n);
void timdiemyenngua(int a[][5], int m, int n);

int main(){
    int m, n;
    int a[5][5];
    printf("Moi ngai Tuan Du nhap so dong cua ma tran (2<=m<=5): ");
    scanf("%d", &m);
    printf("Nhap so cot cua ma tran (2<=n<=5): ");
    scanf("%d", &n);
    int choice;
    do{
        printf("\nMoi ban chon:\n");
        printf("1. Nhap vao cac phan tu cua ma tran\n");
        printf("2. Hien thi ma tran vua nhap\n");
        printf("3. Sap xep tang tren tung hang ma tran\n");
        printf("4. Tinh trung binh cong cac so chan trong ma tran\n");
        printf("5. Tim diem yen ngua trong ma tran\n");
        printf("6. Ket thuc chuong trinh\n");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                nhapmatran(a, m, n);
                break;
            case 2:
                hienthimatran(a, m, n);
                break;
            case 3:
                sapxeptangtrenmoihang(a, m, n);
                printf("Ma tran sau khi sap xep tang tren tung hang:\n");
                hienthimatran(a, m, n);
                break;
            case 4:
                printf("Trung binh cong cac so chan trong ma tran: %f\n", tinhtrungbinhcongcacsochan(a, m, n));
                break;
            case 5:
                timdiemyenngua(a, m, n);
                break;
            case 6:
                printf("Ket thuc chuong trinh!\n");
                break;
            default:
                printf("Khong hop le. Moi ban chon lai!\n");
                break;
        }
    }while(choice != 0);
    return 0;
}

void nhapmatran(int a[][5], int m, int n){
	int i, j;
    printf("Nhap vao cac phan tu cua ma tran:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void hienthimatran(int a[][5], int m, int n){
	int i,j;
    printf("Ma tran vua nhap:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

void sapxeptangtrenmoihang(int a[][5], int m, int n){
	int i, j, k;
	for(i=0; i<m; i++){
        for(j=0; j<n-1; j++){
            for(k=j+1; k<n; k++){
                if(a[i][j] > a[i][k]){
                    int res = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = res;
                }
            }
        }
    }
}

float tinhtrungbinhcongcacsochan(int a[][5], int m, int n){
    int tong = 0;
    int dem = 0;
    int i, j;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(a[i][j] % 2 == 0){
                tong += a[i][j];
                dem++;
            }
        }
    }
    if(dem == 0) return 0;
    return (float)tong / dem;
}

void timdiemyenngua(int a[][5], int m, int n){
    printf("Cac diem yen ngua trong ma tran:\n");
    int i, j, k;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            int min_hang = a[i][j];
            int max_cot = a[i][j];
            for(k=0; k<n; k++){
                if(a[i][k] < min_hang){
                    min_hang = a[i][k];
                }
            }
            for(k=0; k<m; k++){
                if(a[k][j] > max_cot){
                    max_cot = a[k][j];
                }
            }
            if(a[i][j] == min_hang && a[i][j] == max_cot){
                printf("(%d, %d)\n", i, j);
            }
        }
    }
}

