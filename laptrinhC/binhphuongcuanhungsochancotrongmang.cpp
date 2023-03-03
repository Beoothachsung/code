//tinh binh phuong cua nhung so chan co trong mang
#include <stdio.h>
int main (){
	int n;
	scanf ("%d", &n);
	int a[n];
	int i;
	for (i=0; i<n; i++){
		scanf ("%d", &a[i]);
	}
	printf ("\nOUTPUT:\n");
	for (i=0; i<n; i++){
		if (a[i] % 2 == 0)
		printf ("%d\n", a[i] * a[i]);
	}
}
