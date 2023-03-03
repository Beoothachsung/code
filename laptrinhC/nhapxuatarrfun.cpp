#include <stdio.h>
void Nhap (float a[], int slpt){
	int i;
	for (i=0; i<slpt; i++){
		scanf ("%f", &a[i]);
	}
}
void Hien (float a[], int slpt){
	int i;
	for (i=0; i<slpt; i++){
		printf ("%.1f ",a[i]);
	}
}
float MAX (float a[], int slpt){
	float max;
	int i;
	max = a[0];
	for(i=0; i<max; i++){
		if (max<a[i]){
			max=a[i];
		}
	}
	return max;
}
int main (){
	int n;
	float x[20];
	do{
		scanf ("%d", &n);
	}while (n<3 || n>20);
	printf ("\nMoi ngai Tuan du nhap cac phan tu cua mang: \n");
	Nhap(x,n);
	printf ("\nMang vua nhap la: ");
	Hien(x,n);
	printf("\nGia tri max cua mang = %.2f", MAX(x,n));
}
