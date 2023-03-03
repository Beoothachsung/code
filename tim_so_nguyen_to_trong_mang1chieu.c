#include <stdio.h>
#include <math.h>
int nt(int n){
	int i;
	for (i=2; i<=sqrt(n); i++){
		if (n%i==0)
			return 0;
	}
	return n>1;
}
int main (){
	int n;
	scanf ("%d", &n);
	int i, a[10000];
	for (i=0; i<n; i++){
		scanf ("%d", &a[i]);
	}
	for (i=0; i<n; i++){
		if (nt(a[i])){
			printf ("%d", i);
			break;
		}
	}
	if (i==n){
		printf ("-1");
	}	
	return 0;
}
