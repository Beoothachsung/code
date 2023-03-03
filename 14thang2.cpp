#include<stdio.h>
int Menu(){
 int userChoice;
 printf("\n1.Nhap mang: ");
 printf("\n2.Hien mang: ");
 printf("\n3.Sap xep Bubble Sort mang: ");
 printf("\n4 xoaPhanTu 1 phan tu = x trong mang: ");
 printf("\n5.Xoa toan bo phan tu trong mang");
 printf("\nMoi chon chuc nang 1-5 Nhap so khac de thoat: ");
 scanf("%d", &userChoice);
 return(userChoice);
}
int Add(int a[], int n, int value){
 if (n >= 100) printf("\nMang da day, khong them duoc nua");
 else{
 a[n] = value;
 n++;
 }
 return n;
}
void Hien_mang(int a[], int n){
 printf("\n");
    int i;
 for (i = 0; i < n; i++){
 printf("%d ", a[i]);
 }
 printf("\n");
}
void Bubble_Sort(int a[], int n){
 int i, j;
 for (i = 0; i < n - 1; i++){
 for (j = n - 1; j > i; j--){
 if (a[j] > a[j - 1]){
 int temp = a[j];
 a[j] = a[j - 1];
 a[j - 1] = temp;
 }
 }
 }
}
int xoaPhanTu(int a[], int n, int x){
 int i, pos = -1;
 for (i = 0; i < n; i++){
 if (a[i] == x){
 pos = i;
 }
 }
 if (pos < 0) printf("\nKhong tim thay %d", x);
 else {
 for (i = pos; i < n - 1; i++){
 a[i] = a[i + 1];
 }
 n--;
 }
 return n;
}
int xoaToanBo(int a[], int n){
    int i;
    for (i = 0; i < n - 1; i++){
        a[i] = a[i + 1];
    }
    n--;
    return n;
}
int main(){
 int a[100], n = 0, choice, value, x;
 do {
 choice = Menu();
 switch(choice){
 case 1:
 printf("\nNhap cac phan tu mang toi khi bang 0 thi dung: ");
 do {
 scanf("%d", &value);
 n = Add(a, n, value);
 } while (value != 0);
 break;
 case 2:
 Hien_mang(a, n);
 break;
 case 3:
 Bubble_Sort(a, n);
 printf("\nMang sau khi sap xep la: ");
 Hien_mang(a, n);
                printf("\n");
 break;
 case 4:
 printf("\nNhap so can xoa x = ");
 scanf("%d", &x);
 n = xoaPhanTu(a, n, x);
                break;
            case 5:
                while (n != 0){
                    n = xoaToanBo(a, n);
                }
                printf("\nDa xoa toan bo phan tu trong mang\n");
                break;
 }
 } while(choice > 0 && choice <= 5);
}
