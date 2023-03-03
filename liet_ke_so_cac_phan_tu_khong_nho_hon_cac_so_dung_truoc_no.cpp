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
		int ok=1;
		for (j=0; j<i; j++){
			if(a[j]>a[i]){
				ok=0;
				break;
			}
		}
		if(ok) printf ("%d", a[i]);
	}
}
