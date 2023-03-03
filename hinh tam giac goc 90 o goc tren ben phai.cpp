#include <stdio.h>
int main (){
	int i, j, k;
	int n;
	scanf ("%d", &n);
	for (i = n; i>0;i--){
		for (k=1;k<n-i+1;k++) printf("  ");
		for (j=1 ;j<=i;j++) printf("* ");
		printf ("\n");
	}
}
