//btap ve mang mot chieu: in ra so lon nhat va so nho nhat trong mang
#include <stdio.h>
int main (){
	int n;
	scanf ("%d", &n);
	int i;
	int a[n];
	for (i=0; i<n; i++){
		scanf ("%d", &a[i]);
	}
	int min = a[0], max = a[0];
//cung co the nhap int min=1e9+1, max=-1e9-1(vi khi nhap bien min/max la so cuc nho/lon thi
//khi gap phan tu dau tien no se cap nhat gia tri cua phan tu dau tien.
	for (i=1; i<n; i++){
		if (a[i] < min){
			min = a[i];
		}
		if (a[i] > max){
			max = a[i];
		}
	}
	printf ("%d %d", max, min);
}
