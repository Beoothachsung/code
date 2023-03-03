//btap: chon ra cac so le va sap xep chung theo thu tu tang dan
// scan cac so 7, 5, -4, -5, 9, 15, 8, 10.
#include <stdio.h>
int main (){
	int n;
	scanf ("%d", &n);
	int i, j;
	int a[n];
	for (i=0; i<n; i++){
		scanf ("%d", &a[i]);
	}
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			if (a[i]<a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf ("\nOUTPUT:\n ");
		for (i=0; i<n; i++){
		if (a[i] % 2 != 0){
			printf ("%d\n", a[i]);
		}
	}
}
