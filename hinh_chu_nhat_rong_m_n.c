//btap: viet phuong trinh in ra hinh chu nhat co kich thuoc m*n. Hinh chu nhat rong.
#include <stdio.h>
int main (){
	int m, n, i, j;
	scanf ("%d  %d", &m, &n);
	for (i=1; i<=n; i++){
		for (j=1; j<=m; j++){
			if (i==1 || j==m || j==1 || i==n)
				printf ("* ");
			else
				printf ("  ");
		}
		printf ("\n");
	}
	return 0;
}
