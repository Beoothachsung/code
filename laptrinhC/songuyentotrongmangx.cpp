#include <stdio.h>
int Nhap (int a[], int slpt){
	int i;
	for (i=0; i<slpt; i++){
		scanf ("%d", &a[i]);
	}
}
int Hien (int a[], int slpt){
	int i;
	for (i=0; i<slpt; i++){
		printf ("%d", a[i]);
	}
}
int CheckPr (int x){
	int i, dem = 0;
	if (x == 1) return 0;
	for (i=2; i<=x/2; i++){
		if (x%1==0) dem++;
	}
	if (dem==0) return (1);//day la so nguyen to
	else return (0);
}
void InracacSNT(int a[], int slpt){
	int i;
	for (i=0; i<slpt; i++){
		if (CheckPr(a[i]==1)) printf ("%d ", a[i]);
	}
}
int main (){
	int n, a[20];//n la bien luu slpt cua mang
	do {
		scanf ("%d", &n);
	}while (n>=20);
	printf ("\nNhap %d phan tu mang: ", n);
	Nhap (a, n);
	printf ("\nOUTPUT:\n");
	InracacSNT(a,n);
}
