#include <stdio.h>
int main (){
	int i, j;
	int n;
	scanf ("%d", &n);
	for (i = n; i>0;i--){
		for (j=1 ;j<=i;j++) printf("* ");
		printf ("\n");
	}
}