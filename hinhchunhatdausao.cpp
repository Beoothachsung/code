#include <stdio.h>
int main (){
	int n;
	printf ("Moi Tuan Du dep trai nhap n: ");
	scanf ("%d", &n);
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			printf ("* ");
		}
		printf ("\n");
	}
}
