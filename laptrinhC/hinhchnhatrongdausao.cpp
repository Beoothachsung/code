#include <stdio.h>
//co bao nhieu dong
//moi dong co bao nhieu cot, ki tu
//kitu, so, chu no in ra la gi?
//co the nghi i la dong, j la cot
int main (){
	int n;
	scanf ("%d", &n);
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			if (i == 1 || i == n || j == 1 || j == n) printf ("*");
			else printf (" ");//neu khong thi in ra dau cach
		}
		printf ("\n");
	}
}
