//mang 1 chieu: Dem so luong cac so nguyen to co trong mang
#include <stdio.h>
#include <math.h>
int nt (int n){
	int i;
	for (i=0; i<=sqrt(n); i++){
		if (n % i == 0) return 0;
	}
	return n>1;
}
int main (){
	int n;
	scanf ("%d", &n);
	int i, a[n];
	for (i=0; i<n; i++){
		scanf ("%d", &a[i]);
	}
	for (i=0; i<n; i++){
		if (nt(a[i])) printf ("%d", a[i]);
	}
}
