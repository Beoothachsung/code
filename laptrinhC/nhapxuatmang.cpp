//thuc hien nhap va hien mot mang co n phan tu n>=3 va n<=20
#include <stdio.h>
int main (){
	double a[20];
	int i,n;//n dung de luu so luong phan tu, i dung lam bien chay
	do{
		scanf ("%d", &n);
	}while (n<3 || n>20);
	printf ("\nTuan du nhap cac phan tu cua mang: \n");
	for (i=0; i<n; i++){
		scanf ("%lf", &a[i]);
	}
	printf ("\nMang vua nhap la: ");
	for (i=0; i<n; i++){
		printf ("%.2lf", a[i]);
	}
}
