//btap: Xoa tat ca cac phan tu trung nhau trong mang va chi giu lai phan tu dau tien
//case 1: Input:8
//              1 4 2 5 6 2 4 4
//      Output: 1 4 2 5 6.
#include <stdio.h>
int main (){
	int n;
	scanf ("%d", &n);
	int a[10000];
	int i, j, k;
	for (i=0; i<n; i++){
		scanf ("%d", &a[i]);
	}
	for (i=0; i<n-1; i++){
		for (j=i+1; j<n; j++){
			if (a[i]==a[j]){
				for (k=j; k<n; k++){
					a[k] = a[k+1];
				}
				n--;
				j--;
			}
		}
	}
	for (i=0; i<n; i++){
		printf ("%d ", a[i]);
	}
}
